#pragma once

#include <iostream>

template<typename T, size_t size>
void map(T *array, T(*change)(T)) {
    for (size_t i = 0; i < size; i++) {
        array[i] = change(array[i]);
    }
}
