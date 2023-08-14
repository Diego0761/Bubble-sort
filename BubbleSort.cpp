#include <iostream>
using namespace std;

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }

    cout << endl;
}

void bubbleSort(int arr[], int size) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    const int size = 10;

    int arr[size] = { 3, 1, 8, 4, 5, 2, 7, 6, 9 };

    cout << "Before: ";
    printArr(arr, size);

    cout << "After: ";
    bubbleSort(arr, size);
    printArr(arr, size);
}
