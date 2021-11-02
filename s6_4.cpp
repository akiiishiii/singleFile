// s6_4.cpp
#include <cmath>
#include <iostream>

inline float f(float x) { return x * x + 3 * x - 4; }

int main(int argc, char const *argv) {
    float x1, x2, x0;
    std::cout << "请输入初值x1和x2:";
    std::cin >> x1 >> x2;
    do {
        x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
        ((f(x0) * f(x2) < 0) ? x1 : x2) = x0;
    } while (fabs(f(x0)) > 1e-5);
    std::cout << "x0=" << x0;
    return 0;
}
