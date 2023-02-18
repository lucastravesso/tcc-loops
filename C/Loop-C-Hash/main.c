#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void executeHash() {
    long memoria;
    clock_t horaDeInicio, horaDeFim;
    double tempo;

    horaDeInicio = clock();
    int* hash = malloc(1000000 * sizeof(int));
    for (int i = 0; i < 1000000; i++) hash[i] = 0;
    memoria = (long) (sizeof(int) * 1000000 / (1024 * 1024));
    horaDeFim = clock();
    tempo = (double) (horaDeFim - horaDeInicio) / CLOCKS_PER_SEC;
    printf("Horario de finalizacao: %f\n", tempo);
    printf("Uso de memória: %ld MB\n", memoria);
    printf("\n");
    free(hash);

    horaDeInicio = clock();
    hash = malloc(50000000 * sizeof(int));
    for (int i = 0; i < 50000000; i++) hash[i] = 0;
    memoria = (long) (sizeof(int) * 50000000 / (1024 * 1024));
    horaDeFim = clock();
    tempo = (double) (horaDeFim - horaDeInicio) / CLOCKS_PER_SEC;
    printf("Horario de finalizacao: %f\n", tempo);
    printf("Uso de memória: %ld MB\n", memoria);
    printf("\n");
    free(hash);

    horaDeInicio = clock();
    hash = malloc(100000000 * sizeof(int));
    for (int i = 0; i < 100000000; i++) hash[i] = 0;
    memoria = (long) (sizeof(int) * 100000000 / (1024 * 1024));
    horaDeFim = clock();
    tempo = (double) (horaDeFim - horaDeInicio) / CLOCKS_PER_SEC;
    printf("Horario de finalizacao: %f\n", tempo);
    printf("Uso de memória: %ld MB\n", memoria);
    printf("\n");
    free(hash);

    horaDeInicio = clock();
    hash = malloc(150000000 * sizeof(int));
    for (int i = 0; i < 150000000; i++) hash[i] = 0;
    memoria = (long) (sizeof(int) * 150000000 / (1024 * 1024));
    horaDeFim = clock();
    tempo = (double) (horaDeFim - horaDeInicio) / CLOCKS_PER_SEC;
    printf("Horario de finalizacao: %f\n", tempo);
    printf("Uso de memória: %ld MB\n", memoria);
    printf("\n");
    free(hash);

    horaDeInicio = clock();
    hash = malloc(200000000 * sizeof(int));
    for (int i = 0; i < 200000000; i++) hash[i] = 0;
    memoria = (long) (sizeof(int) * 200000000 / (1024 * 1024));
    horaDeFim = clock();
    tempo = (double) (horaDeFim - horaDeInicio) / CLOCKS_PER_SEC;
    printf("Horario de finalizacao: %f\n", tempo);
    printf("Uso de memória: %ld MB\n", memoria);
    printf("\n");
    free(hash);

}

int main() {
    executeHash();
    return 0;
}

