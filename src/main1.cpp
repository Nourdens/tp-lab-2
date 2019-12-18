#include <iostream>
#include "task1.h"

using namespace std;

int main() {
    int array[] = {235, 5325, 2354, 12, 3, 0, 21, 2345};
    for (int i = 0; i < 8; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
    mergesort(array,8);
    for (int i = 0; i < 8; i++) {
        cout << array[i] << " ";
    }
    return 0;
}
