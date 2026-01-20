#include <iostream>
using namespace std;

void merge(int arr[], int a, int b, int x[], int y[]) {
    int i = 0, j = 0, k = 0;
    while (i < a && j < b) {
        if (x[i] <= y[j])
            arr[k++] = x[i++];
        else
            arr[k++] = y[j++];
    }
    while (i < a)
        arr[k++] = x[i++];
    while (j < b)
        arr[k++] = y[j++];
}
void mergesort(int n, int arr[]) {
    if (n <= 1) return;
    int a = n / 2;
    int b = n - a;
    int* x = new int[a];
    int* y = new int[b];
    for (int i = 0; i < a; i++)
        x[i] = arr[i];

    for (int i = 0; i < b; i++)
        y[i] = arr[i + a];

    mergesort(a, x);
    mergesort(b, y);
    merge(arr, a, b, x, y);
    delete[] x;
    delete[] y;
}

int main() {
    int arr[] = {3, 4, 1, 2, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergesort(n, arr);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
