#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
\
void quickSort(int arr[], int low, int high) {
    while (low < high) {
        int p = partition(arr, low, high);

        if (p - low < high - p) {
            quickSort(arr, low, p - 1); 
            low = p + 1;
        } else {
            quickSort(arr, p + 1, high); 
            high = p - 1;
        }
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
         cout << arr[i] << " ";

    return 0;
}
