// s10_3.cpp
#include <algorithm>
#include <iostream>

inline int sum(int mat[3][4], int k);
inline void swap(int mat[3][4], int x, int y);

int main(int argc, char const *argv[]) {
    int t[4], a[3][4] = {{5, 8, 10, 15}, {17, 6, 4, 8}, {6, 15, 9, 12}};
    std::cout << "原始数组:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++)
            std::cout << a[i][j] << ' ';
        std::cout << '\n';
    }
    for (int i = 0; i < 4; i++)
        t[i] = sum(a, i);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j <= i; j++)
            if (t[j] > t[j + 1]) {
                std::swap(t[j], t[j + 1]);
                swap(a, j, j + 1);
            }
    std::cout << "排序后的数组:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++)
            std::cout << a[i][j] << ' ';
        std::cout << '\n';
    }
    return 0;
}

inline int sum(int mat[3][4], int k) {
    int ret = 0;
    for (int i = 0; i < 3; i++)
        ret += mat[i][k];
    return ret;
}

inline void swap(int mat[3][4], int x, int y) {
    for (int i = 0; i < 3; i++)
        std::swap(mat[i][x], mat[i][y]);
}
