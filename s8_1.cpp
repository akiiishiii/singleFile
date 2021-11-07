// s8_1.cpp
#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[]) {
    int a[6] = {9, 8, 7, 6, 5, 4};
    int const MAXN = 6;
    for (int i = 0; i < MAXN - 1; i++)
        for (int j = 0; j < MAXN - i - 1; j++)
            if (a[j] > a[j + 1])
                std::swap(a[j], a[j + 1]);
    for (int i = 0; i < MAXN; i++)
        std::cout << a[i] << ' ';
    std::cout << '\n';
    return 0;
}
