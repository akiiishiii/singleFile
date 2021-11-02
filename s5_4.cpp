// s5_4.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    double x, xn, res;
    int n;
    std::cin >> n >> x;
    res = xn = x;
    for (int i = 2; i <= n; i++) {
        xn *= (-1) * ((x * x) / ((2 * i - 1) * (2 * i - 2)));
        res += xn;
    }
    std::cout << "y=" << res;
    return 0;
}
