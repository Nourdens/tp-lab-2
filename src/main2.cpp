#include <iostream>
#include "task2.h"

template<class T>
T gen() {
    return '7';
}

int main() {
    size_t n = 10;
    char *array = createArr<char, 10>(&gen);
    for (size_t i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
    return 0;
}
