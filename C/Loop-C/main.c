#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ExecuteStask() {
    long i, memoria;
    clock_t horaDeInicio;

    struct Stack {
        long item;
        struct Stack *next;
    };

    struct Stack *pilha = NULL;

    horaDeInicio = clock();
    for (i = 0; i < 1000000; i++) {
        struct Stack *novo_item = (struct Stack *) malloc(sizeof(struct Stack));
        novo_item->item = i;
        novo_item->next = pilha;
        pilha = novo_item;
    }
    memoria = ((long) sizeof(struct Stack) * 1000000) / (1024 * 1024);
    printf("Horario de finalizacao: %f\n", (double) (clock() - horaDeInicio) / CLOCKS_PER_SEC);
    printf("Uso de memoria: %ld MB\n", memoria);
    struct Stack *item = pilha;
    while (item != NULL) {
        struct Stack *proximo_item = item->next;
        free(item);
        item = proximo_item;
    }
    pilha = NULL;

    horaDeInicio = clock();
    for (i = 0; i < 50000000; i++) {
        struct Stack *novo_item = (struct Stack *) malloc(sizeof(struct Stack));
        novo_item->item = i;
        novo_item->next = pilha;
        pilha = novo_item;
    }
    memoria = ((long) sizeof(struct Stack) * 50000000) / (1024 * 1024);
    printf("Horario de finalizacao: %f\n", (double) (clock() - horaDeInicio) / CLOCKS_PER_SEC);
    printf("Uso de memoria: %ld MB\n", memoria);
    item = pilha;
    while (item != NULL) {
        struct Stack *proximo_item = item->next;
        free(item);
        item = proximo_item;
    }
    pilha = NULL;

    horaDeInicio = clock();
    for (i = 0; i < 100000000; i++) {
        struct Stack *novo_item = (struct Stack *) malloc(sizeof(struct Stack));
        novo_item->item = i;
        novo_item->next = pilha;
        pilha = novo_item;
    }
    memoria = ((long) sizeof(struct Stack) * 100000000) / (1024 * 1024);
    printf("Horario de finalizacao: %f\n", (double) (clock() - horaDeInicio) / CLOCKS_PER_SEC);
    printf("Uso de memoria: %ld MB\n", memoria);
    item = pilha;
    while (item != NULL) {
        struct Stack *proximo_item = item->next;
        free(item);
        item = proximo_item;
    }
    pilha = NULL;

    horaDeInicio = clock();
    for (i = 0; i < 150000000; i++) {
        struct Stack *novo_item = (struct Stack *) malloc(sizeof(struct Stack));
        novo_item->item = i;
        novo_item->next = pilha;
        pilha = novo_item;
    }
    memoria = ((long) sizeof(struct Stack) * 150000000) / (1024 * 1024);
    printf("Horario de finalizacao: %f\n", (double) (clock() - horaDeInicio) / CLOCKS_PER_SEC);
    printf("Uso de memoria: %ld MB\n", memoria);
    item = pilha;
    while (item != NULL) {
        struct Stack *proximo_item = item->next;
        free(item);
        item = proximo_item;
    }
    pilha = NULL;

    horaDeInicio = clock();
    for (i = 0; i < 200000000; i++) {
        struct Stack *novo_item = (struct Stack *) malloc(sizeof(struct Stack));
        novo_item->item = i;
        novo_item->next = pilha;
        pilha = novo_item;
    }
    memoria = ((long) sizeof(struct Stack) * 200000000) / (1024 * 1024);
    printf("Horario de finalizacao: %f\n", (double) (clock() - horaDeInicio) / CLOCKS_PER_SEC);
    printf("Uso de memoria: %ld MB\n", memoria);
    item = pilha;
    while (item != NULL) {
        struct Stack *proximo_item = item->next;
        free(item);
        item = proximo_item;
    }
    pilha = NULL;

}
    int main() {
        ExecuteStask();
    return 0;
}
