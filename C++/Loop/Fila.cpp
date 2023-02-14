#include <chrono>
#include <list>
#include "iostream"

int main(){
    std::list<int> fila;

    auto horaDeInicio = std::chrono::system_clock::now();

    for (int i = 0; i < 200000000; ++i) {
        fila.push_back(i);
    }

    auto horaDeFim = std::chrono::system_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(horaDeFim - horaDeInicio);

    std::cout << "Tempo " << duration.count() / 1000.0 << std::endl;


    return 0;
}