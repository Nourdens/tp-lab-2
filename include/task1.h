#pragma once

#include <cstring>

template <typename T>
bool compare(T a, T b) {
    return a < b;
}

template <>
bool compare(char* a, char* b) {
    return strlen(a) < strlen(b);
}

template <typename T>
void mergesort(T array[], size_t n) {
    if (n < 2) {
        return;
    }

    size_t middle = n / 2;

    mergesort(array, middle);
    mergesort(array + middle, n - middle);

    T* tmp = new T[n];
    size_t tmpPosition = 0, leftPosition = 0, rightPosition =  n / 2;

    while ((leftPosition < n / 2) && (rightPosition < n)) {
        if (compare(array[leftPosition], array[rightPosition]))
            tmp[tmpPosition++] = array[leftPosition++];
        else
            tmp[tmpPosition++] = array[rightPosition++];
    }

    while (leftPosition < n / 2) {
        tmp[tmpPosition++] = array[leftPosition++];
    }

    while (rightPosition < n) {
        tmp[tmpPosition++] = array[rightPosition++];
    }

    for (size_t i = 0; i < n; i++) {
        array[i] = tmp[i];
    }
}
