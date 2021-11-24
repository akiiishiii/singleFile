// T4.cpp
#include <iostream>

int const Maxn = 10;

int main(int argc, char const *argv[]) {
    std::cout.sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, m, mat[Maxn + 5][Maxn + 5];
    std::cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            std::cin >> mat[i][j];
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++)
            std::cout << mat[j][i] << ' ';
        std::cout << '\n';
    }
    return 0;
}
