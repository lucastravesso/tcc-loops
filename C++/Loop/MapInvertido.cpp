#include <iostream>
#include <stack>
#include <vector>
#include <unordered_map>
#include <map>
#include <list>
#include <chrono>
#include <Windows.h>
#include <psapi.h>

using namespace std;

const int MAX_VALOR = 9;
const int NUM_LINHAS = 100;
const int NUM_COLUNAS = 10;

int main() {
    int matriz[NUM_LINHAS][NUM_COLUNAS];

    srand(time(0));
    for (int i = 0; i < NUM_LINHAS; i++) {
        for (int j = 0; j < NUM_COLUNAS; j++) {
            matriz[i][j] = rand() % MAX_VALOR + 1;
        }
    }

    auto horaDeInicio = std::chrono::system_clock::now();
    PROCESS_MEMORY_COUNTERS_EX pmc_start;
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_start, sizeof(pmc_start));

    vector<unordered_map<int, vector<int>>> pilhasPorValor(NUM_COLUNAS);
    for (int j = 0; j < NUM_COLUNAS; j++) {
        unordered_map<int, list<int>> mapa;
        for (int i = 0; i < NUM_LINHAS; i++) {
            if (mapa.count(matriz[i][j])) {
                mapa[matriz[i][j]].push_back(i);
            } else {
                mapa[matriz[i][j]] = {i};
            }
        }
        unordered_map<int, vector<int>> pilhas;
        for (auto entry : mapa) {
            list<int> indices = entry.second;
            if (indices.size() >= 1) {
                vector<int> pilha;
                for (int i : indices) {
                    pilha.push_back(i);
                }
                pilhas[entry.first] = pilha;
            }
        }
        pilhasPorValor[j] = pilhas;
    }
    auto horaDeFim = std::chrono::system_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(horaDeFim - horaDeInicio);

    PROCESS_MEMORY_COUNTERS_EX pmc_end;
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_end, sizeof(pmc_end));

    SIZE_T memory_used_end = pmc_end.PrivateUsage;

    std::cout << "Memoria " << memory_used_end / 1024 / 1024 << std::endl;
    std::cout << "Tempo " << duration.count() / 1000.0 << std::endl;

    for (int i = 0; i < NUM_LINHAS; i++) {
        for (int j = 0; j < NUM_COLUNAS; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    for (int j = 0; j < NUM_COLUNAS; j++) {
        cout << char('A' + j) << ":" << endl;
        unordered_map<int, vector<int>> pilhas = pilhasPorValor[j];
        for (auto entry : pilhas) {
            int valor = entry.first;
            vector<int> pilha = entry.second;
            cout << valor << " : ";
            for (int i : pilha) {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
