#include <chrono>
#include "iostream"
#include "unordered_map"
#include <Windows.h>
#include <psapi.h>

int main(){
    std::unordered_map<long, long> hash;
    auto horaDeInicio = std::chrono::system_clock::now();
    PROCESS_MEMORY_COUNTERS_EX pmc_end;

    for (int i = 0; i < 1000000; ++i) {
        hash[i] = 0;
    }
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_end, sizeof(pmc_end));
    SIZE_T memory_used_end = pmc_end.PrivateUsage;

    auto horaDeFim = std::chrono::system_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(horaDeFim - horaDeInicio);

    std::cout << "Memoria " << memory_used_end / 1024 / 1024 << std::endl;
    std::cout << "Tempo " << duration.count() / 1000.0 << std::endl;
    hash.clear();

    for (int i = 0; i < 50000000; ++i) {
        hash[i] = 0;
    }
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_end, sizeof(pmc_end));
    memory_used_end = pmc_end.PrivateUsage;

    horaDeFim = std::chrono::system_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(horaDeFim - horaDeInicio);

    std::cout << "Memoria " << memory_used_end / 1024 / 1024 << std::endl;
    std::cout << "Tempo " << duration.count() / 1000.0 << std::endl;
    hash.clear();

    for (int i = 0; i < 100000000; ++i) {
        hash[i] = 0;
    }
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_end, sizeof(pmc_end));
    memory_used_end = pmc_end.PrivateUsage;

    horaDeFim = std::chrono::system_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(horaDeFim - horaDeInicio);

    std::cout << "Memoria " << memory_used_end / 1024 / 1024 << std::endl;
    std::cout << "Tempo " << duration.count() / 1000.0 << std::endl;
    hash.clear();

    for (int i = 0; i < 150000000; ++i) {
        hash[i] = 0;
    }
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_end, sizeof(pmc_end));
    memory_used_end = pmc_end.PrivateUsage;

    horaDeFim = std::chrono::system_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(horaDeFim - horaDeInicio);

    std::cout << "Memoria " << memory_used_end / 1024 / 1024 << std::endl;
    std::cout << "Tempo " << duration.count() / 1000.0 << std::endl;
    hash.clear();

    for (int i = 0; i < 200000000; ++i) {
        hash[i] = 0;
    }
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_end, sizeof(pmc_end));
    memory_used_end = pmc_end.PrivateUsage;

    horaDeFim = std::chrono::system_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(horaDeFim - horaDeInicio);

    std::cout << "Memoria " << memory_used_end / 1024 / 1024 << std::endl;
    std::cout << "Tempo " << duration.count() / 1000.0 << std::endl;
    hash.clear();

    return 0;
}