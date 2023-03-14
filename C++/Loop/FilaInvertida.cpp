
#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <random>
#include <algorithm>

using namespace std;

const int MIN_REPETICOES = 2;
const int MAX_VALOR = 9;
const int NUM_LINHAS = 10;
const int NUM_COLUNAS = 5;

int main() {
// Criar matriz com 10000 linhas e 11 colunas
    int matriz[NUM_LINHAS][NUM_COLUNAS];
// Preencher matriz com valores aleatórios de 1 a 1000
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, MAX_VALOR);
    for (int i = 0; i < NUM_LINHAS; i++) {
        for (int j = 0; j < NUM_COLUNAS; j++) {
            matriz[i][j] = distrib(gen);
        }
    }

// Criar lista de listas de pilhas para armazenar índices de valores repetidos em cada coluna
    vector<vector<stack<int>>> pilhasPorValor(NUM_COLUNAS);
    for (int j = 0; j < NUM_COLUNAS; j++) {
        map<int, vector<int>> mapa;
        for (int i = 0; i < NUM_LINHAS; i++) {
            if (mapa.count(matriz[i][j])) {
                mapa[matriz[i][j]].push_back(i);
            } else {
                mapa[matriz[i][j]] = vector<int>{i};
            }
        }
        vector<stack<int>> pilhas;
        for (auto &entry: mapa) {
            vector<int> indices = entry.second;
            if (indices.size() >= MIN_REPETICOES) {
                stack<int> pilha;
                for (int i: indices) {
                    pilha.push(i);
                }
                pilhas.push_back(pilha);
            }
        }
        pilhasPorValor[j] = pilhas;
    }

    for (int i = 0; i < NUM_LINHAS; i++) {
        for (int j = 0; j < NUM_COLUNAS; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    for (int j = 0; j < NUM_COLUNAS; j++) {
        cout << (char) ('A' + j) << ":" << endl;
        vector<stack<int>> pilhas = pilhasPorValor[j];
        for (int i = 0; i < pilhas.size(); i++) {
            stack<int> pilha = pilhas[i];
            int valor = matriz[pilha.top()][j];
            cout << valor << " : ";
            while (!pilha.empty()) {
                cout << pilha.top() << " ";
                pilha.pop();
            }
            cout << endl;
        }
    }

    return 0;
}