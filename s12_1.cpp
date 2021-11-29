// s12_1.cpp
#include <iostream>

void moveElement(int *const array, int const range, int const length);

int main(int argc, char const *argv[]) {
    int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int p;
    std::cout << "Input p:";
    std::cin >> p;
    moveElement(a, p, 15);
    for (auto const &i : a)
        std::cout << i << ' ';
    std::cout << '\n';
    return 0;
}

void moveElement(int *const array, int const range, int const length) {
    for (int i = 0; i <= range; i++) {
        int *t = new int(*array);
        for (int j = 0; j < length - 1; j++)
            *(array + j) = *(array + j + 1);
        *(array + length - 1) = *t;
        delete t;
    }
}
