#include "iostream"
#include "unordered_map"

int main(){
    std::unordered_map<int, int> hash;

    for (int i = 0; i < 200000000; ++i) {
        hash[i] = i;
    }

    return 0;
}