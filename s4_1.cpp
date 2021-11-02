// s4_1.cpp
#include <iostream>

int gcd(int a, int b) { return a % b ? gcd(b, a % b) : b; }

int main(int argc, char const *argv[]) {
    int a, b;
    std::cout << "请输入两个正整数: ";
    std::cin >> a >> b;
    int cd = gcd(a, b);
    std::cout << "最大公约数: " << cd << '\n'
              << "最小公倍数: " << a * b / cd << '\n';
    return 0;
}
