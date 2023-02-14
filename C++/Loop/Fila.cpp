#include <chrono>
#include <list>
#include <Windows.h>
#include <psapi.h>
#include "iostream"

int main(){
    std::list<int> fila;
    auto horaDeInicio = std::chrono::system_clock::now();
    PROCESS_MEMORY_COUNTERS_EX pmc_start;
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_start, sizeof(pmc_start));

    for (int i = 0; i < 1000000; ++i) {
        fila.push_back(i);
    }

    auto horaDeFim = std::chrono::system_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(horaDeFim - horaDeInicio);

    PROCESS_MEMORY_COUNTERS_EX pmc_end;
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_end, sizeof(pmc_end));

    SIZE_T memory_used_end = pmc_end.PrivateUsage;

    std::cout << "Memoria " << memory_used_end / 1024 / 1024 << std::endl;
    std::cout << "Tempo " << duration.count() / 1000.0 << std::endl;
    fila.clear();

    horaDeInicio = std::chrono::system_clock::now();
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_start, sizeof(pmc_start));

    for (int i = 0; i < 50000000; ++i) {
        fila.push_back(i);
    }

    horaDeFim = std::chrono::system_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(horaDeFim - horaDeInicio);

    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_end, sizeof(pmc_end));

    memory_used_end = pmc_end.PrivateUsage;

    std::cout << "Memoria " << memory_used_end / 1024 / 1024 << std::endl;
    std::cout << "Tempo " << duration.count() / 1000.0 << std::endl;
    fila.clear();

    horaDeInicio = std::chrono::system_clock::now();
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_start, sizeof(pmc_start));

    for (int i = 0; i < 100000000; ++i) {
        fila.push_back(i);
    }

    horaDeFim = std::chrono::system_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(horaDeFim - horaDeInicio);

    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_end, sizeof(pmc_end));

    memory_used_end = pmc_end.PrivateUsage;

    std::cout << "Memoria " << memory_used_end / 1024 / 1024 << std::endl;
    std::cout << "Tempo " << duration.count() / 1000.0 << std::endl;
    fila.clear();

    horaDeInicio = std::chrono::system_clock::now();
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_start, sizeof(pmc_start));

    for (int i = 0; i < 150000000; ++i) {
        fila.push_back(i);
    }

    horaDeFim = std::chrono::system_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(horaDeFim - horaDeInicio);

    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_end, sizeof(pmc_end));

    memory_used_end = pmc_end.PrivateUsage;

    std::cout << "Memoria " << memory_used_end / 1024 / 1024 << std::endl;
    std::cout << "Tempo " << duration.count() / 1000.0 << std::endl;
    fila.clear();

    horaDeInicio = std::chrono::system_clock::now();
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_start, sizeof(pmc_start));

    for (int i = 0; i < 200000000; ++i) {
        fila.push_back(i);
    }

    horaDeFim = std::chrono::system_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(horaDeFim - horaDeInicio);

    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc_end, sizeof(pmc_end));

    memory_used_end = pmc_end.PrivateUsage;

    std::cout << "Memoria " << memory_used_end / 1024 / 1024 << std::endl;
    std::cout << "Tempo " << duration.count() / 1000.0 << std::endl;
    fila.clear();



    return 0;
}