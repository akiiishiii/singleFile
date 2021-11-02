// s6_4.cpp
#include <cmath>
#include <iostream>

inline float f(float x) { return x * x + 3 * x - 4; }
inline float df(float x) { return 2 * x + 3; }
float solve(float x);

int main(int argc, char const *argv) {
    std::cout << "x=" << solve(0);
    return 0;
}

float solve(float x) {
    if (fabs(f(x)) <= 1e-5)
        return x;
    else
        return solve(x - f(x) / df(x));
}
