// s9_2.cpp
#include <algorithm>
#include <iostream>

int main(int argc, char const *argv[]) {
    int a[4][4] = {
        {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    std::cout << "转置前的数组a:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            std::cout << a[i][j] << ' ';
        std::cout << '\n';
    }
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < i; j++) {
            std::swap(a[i][j], a[j][i]);
        }
    std::cout << "转置后的数组a:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            std::cout << a[i][j] << ' ';
        std::cout << '\n';
    }
    return 0;
}
