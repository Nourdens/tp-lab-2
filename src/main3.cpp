#include <iostream>
#include <cstring>
#include "task3.h"


template<class T>
T change(T value) {
    return value + 77;
}

template<>char* change(char* value) {
    for (size_t i = 0; i < strlen(value); i++) {
        value[i] *= 10;
    }
    return value;
}

int main() {
    const size_t size = 6;
    int array[size]{ 1, 2, 3, 4, 5, 6};
    map<int, size>(array, change);
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
    return 0;
}
