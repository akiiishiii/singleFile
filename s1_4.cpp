// s1_4.cpp
#include <cmath>
#include <iostream>

int main(int argc, char const *argv[]) {
    int a, b, c;
    int s, area;
    std::cin >> a >> b >> c;
    s = a + b + c;
    area = sqrt((s / 2.0) * (s / 2.0 - a) * (s / 2.0 - b) * (s / 2.0 - c));
    std::cout << s << '\n' << area << '\n';
    return 0;
}
