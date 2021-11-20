// s10_1.cpp
#include <iostream>

int binarySearch(int arr[], int n, int num);

int main(int argc, char const *argv[]) {
    int a[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24};
    int num;
    std::cout << "请输入要寻找的数: ";
    std::cin >> num;
    int index = binarySearch(a, sizeof(a) / sizeof(a[0]), num);
    if (index != -1)
        std::cout << "该数在数组中的序号为: " << index << '\n';
    else
        std::cout << "数组中没有该元素\n";
    return 0;
}

int binarySearch(int arr[], int n, int num) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (num < arr[mid])
            high = mid - 1;
        else if (num > arr[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}
