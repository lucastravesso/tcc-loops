#include "iostream"
#include "stack"
#include <chrono>

int main(){
    std::stack<int> pilha;
    auto horaDeInicio = std::chrono::system_clock::now();

    for (int i = 0; i < 200000000; ++i) {
        pilha.push(i);
    }
    auto horaDeFim = std::chrono::system_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(horaDeFim - horaDeInicio);

    std::cout << "Tempo " << duration.count() / 1000.0 << std::endl;

    return 0;
}