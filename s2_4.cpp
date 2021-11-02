// s2_4.cpp
#include <cmath>
#include <iostream>

inline int delta(int a, int b, int c) { return b * b - 4 * a * c; }

int main(int argc, char const *argv[]) {
    int a, b, c;
    std::cin >> a >> b >> c;
    int del = delta(a, b, c);
    if (del > 0) {
        del = sqrt(del);
        std::cout << "方程有两个不同的实根:\n"
                  << "x1=" << (-b + del) / (2 * a) << '\n'
                  << "x2=" << (-b - del) / (2 * a) << '\n';
    } else if (!del)
        std::cout << "方程有两个相等的实根:\n"
                  << "x=" << (-b) / (2 * a) << '\n';
    else
        std::cout << "无实根！\n";
    return 0;
}
