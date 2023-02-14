#include <chrono>
#include "iostream"
#include "unordered_map"

int main(){
    std::unordered_map<int, int> hash;
    auto horaDeInicio = std::chrono::system_clock::now();

    for (int i = 0; i < 200000000; ++i) {
        hash[i] = i;
    }
    auto horaDeFim = std::chrono::system_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(horaDeFim - horaDeInicio);

    std::cout << "Tempo " << duration.count() / 1000.0 << std::endl;

    return 0;
}