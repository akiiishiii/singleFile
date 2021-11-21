// s10_4.cpp
#include <iostream>

void insertionSort(int arr[], int n);

int main(int argc, char const *argv[]) {
    int a[100] = {0}, cnt = 0, tmp;
    while (std::cin >> tmp, tmp) {
        a[cnt++] = tmp;
        insertionSort(a, cnt);
    }
    for (int i = 0; i < cnt; i++)
        std::cout << a[i] << "  ";
    std::cout << '\n';
    return 0;
}

void insertionSort(int arr[], int n) {
    int preIndex, current;
    for (int i = 1; i < n; i++) {
        preIndex = i - 1;
        current = arr[i];
        while (preIndex >= 0 && arr[preIndex] > current) {
            arr[preIndex + 1] = arr[preIndex];
            preIndex--;
        }
        arr[preIndex + 1] = current;
    }
}
