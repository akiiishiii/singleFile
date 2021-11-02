// s2_1.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    float a, b, c;
    std::cout << "input a  b  c\n";
    std::cin >> a >> b >> c;
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        std::cout << "Not Triangle\n";
    else
        std::cout << "Triangle\n";
    return 0;
}
