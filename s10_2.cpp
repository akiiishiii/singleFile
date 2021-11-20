// s10_2.cpp
#include <algorithm>
#include <iostream>

int main(int argc, char const *argv[]) {
    int a[] = {2, 2, 2, 3, 4, 4, 5, 6, 6, 6, 6, 7, 7, 8, 9, 9, 10, 10, 10};
    int *it = std::unique(a, a + sizeof(a) / sizeof(a[0]));
    for (int *i = a; i != it; i++)
        std::cout << *i << ' ';
    std::cout << '\n';
    return 0;
}
