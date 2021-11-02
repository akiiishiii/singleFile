// s6_2.cpp
#include <cmath>
#include <iostream>

inline float f(float x) { return x * x + 3 * x - 4; }
inline float df(float x) { return 2 * x + 3; }

int main(int argc, char const *argv) {
    float x1 = 0, x0;
    do {
        x0 = x1;
        x1 = x0 - f(x0) / df(x0);
    } while (fabs(f(x0)) > 1e-5);
    std::cout << "x=" << x1 << '\n';
    return 0;
}
