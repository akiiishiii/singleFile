// s5_3.cpp
#include <cmath>
#include <iostream>

int main(int argc, char const *argv[]) {
    float y1, y2, x;
    std::cin >> x;
    y1 = y2 = x;
    do {
        y1 = y2;
        y2 = (2 * y1) / 3 + x / (3 * y1 * y1);
    } while (fabs(y2 - y1) > 1e-5);
    std::cout << "y=" << y2 << '\n';
    return 0;
}
