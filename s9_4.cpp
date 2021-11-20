// s9_4.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    int mat[15][15] = {0};
    for (int i = 1; i <= 10; i++)
        mat[i][1] = mat[i][i] = 1;
    for (int i = 2; i <= 10; i++)
        for (int j = 2; j < i; j++)
            mat[i][j] = mat[i - 1][j - 1] + mat[i - 1][j];
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++)
            std::cout << mat[i][j] << "  ";
        std::cout << '\n';
    }
    return 0;
}
