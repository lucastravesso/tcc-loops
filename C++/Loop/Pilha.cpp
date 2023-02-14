#include "iostream"
#include "stack"

int main(){
    std::stack<int> pilha;

    for (int i = 0; i < 200000000; ++i) {
        pilha.push(i);
    }

    return 0;
}