#include <iostream>
#include <cmath>

using namespace std;


void printArray(int* array, int size);
template <typename T>
void squareArray(T* inputArray, int length) {
    for (int i = 0; i < length; i++) {
        inputArray[i] = inputArray[i] * inputArray[i];
    }
}

int main() {
    int a[] = { 4, 6, 7, 6, 4, 2, 1, 2, 8, 9 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Array Elements: ";
    printArray(a, n);
    squareArray(a, n);
    

    cout << "\nModified: ";
    printArray(a, n);

    return 0;
}

void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}