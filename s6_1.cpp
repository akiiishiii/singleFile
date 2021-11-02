// s6_1.cpp
#include <iostream>

inline float fun(float x) { return 2 * x * x + 5 * x + 3; }

int main(int argc, char const *argv) {
    float y1 = fun(1.0), y2 = fun(1.2);
    std::cout << "y1=" << y1 << '\n' << "y2=" << y2 << '\n';
    return 0;
}
