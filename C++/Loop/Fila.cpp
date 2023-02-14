#include "iostream"
#include "queue"

int main(){
    std::queue<int> fila;

    for (int i = 0; i < 200000000; ++i) {
        fila.push(i);
    }

    return 0;
}