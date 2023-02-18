#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ExecuteQueue() {
    clock_t horaDeInicio = clock();
    int i;
    // Cria uma nova fila (linked list)
    struct node {
        int value;
        struct node *next;
    } *head = NULL, *tail = NULL;

    // Adiciona elementos à fila
    for (i = 0; i < 1000000; i++) {
        struct node *new_node = (struct node *) malloc(sizeof(struct node));
        new_node->value = i;
        new_node->next = NULL;
        if (tail == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }
    printf("Horario de finalizacao: %f\n", (double) (clock() - horaDeInicio) / CLOCKS_PER_SEC);
    printf("Uso de memoria: %.3f MB\n", (double) sizeof(struct node) * 1000000 / (1024.0 * 1024.0));

    // Limpa a fila
    while (head != NULL) {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }

    horaDeInicio = clock();
    for (i = 0; i < 50000000; i++) {
        struct node *new_node = (struct node *) malloc(sizeof(struct node));
        new_node->value = i;
        new_node->next = NULL;
        if (tail == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }
    printf("Horario de finalizacao: %f\n", (double) (clock() - horaDeInicio) / CLOCKS_PER_SEC);
    printf("Uso de memoria: %.3f MB\n", (double) sizeof(struct node) * 50000000 / (1024.0 * 1024.0));

    while (head != NULL) {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }

    horaDeInicio = clock();
    for (i = 0; i < 100000000; i++) {
        struct node *new_node = (struct node *) malloc(sizeof(struct node));
        new_node->value = i;
        new_node->next = NULL;
        if (tail == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }
    printf("Horario de finalizacao: %f\n", (double) (clock() - horaDeInicio) / CLOCKS_PER_SEC);
    printf("Uso de memoria: %.3f MB\n", (double) sizeof(struct node) * 100000000 / (1024.0 * 1024.0));

    while (head != NULL) {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }

    horaDeInicio = clock();
    for (i = 0; i < 150000000; i++) {
        struct node *new_node = (struct node *) malloc(sizeof(struct node));
        new_node->value = i;
        new_node->next = NULL;
        if (tail == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }
    printf("Horario de finalizacao: %f\n", (double) (clock() - horaDeInicio) / CLOCKS_PER_SEC);
    printf("Uso de memoria: %.3f MB\n", (double) sizeof(struct node) * 150000000 / (1024.0 * 1024.0));

    while (head != NULL) {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }

    horaDeInicio = clock();
    for (i = 0; i < 200000000; i++) {
        struct node *new_node = (struct node *) malloc(sizeof(struct node));
        new_node->value = i;
        new_node->next = NULL;
        if (tail == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }
    printf("Horario de finalizacao: %f\n", (double) (clock() - horaDeInicio) / CLOCKS_PER_SEC);
    printf("Uso de memoria: %.3f MB\n", (double) sizeof(struct node) * 200000000 / (1024.0 * 1024.0));

    while (head != NULL) {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }
}
    int main() {
    ExecuteQueue();
    return 0;
}

