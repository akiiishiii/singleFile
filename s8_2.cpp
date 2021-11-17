// s8_2.cpp
#include <algorithm>
#include <iostream>

int main(int argc, char const *argv[]) {
    int a[6] = {9, 8, 7, 6, 5, 4};
    int const MAXN = 6;
    for (int j = 0, min; j < MAXN; j++) {
        min = j;
        for (int i = j + 1; i < MAXN; i++)
            if (a[min] > a[i])
                min = i;
        std::swap(a[min], a[j]);
    }
    for (int i = 0; i < MAXN; i++)
        std::cout << a[i] << ' ';
    std::cout << '\n';
    return 0;
}
