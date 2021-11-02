// s2_3.cpp
#include <iostream>

int main(int argc, char const argv[]) {
    float a1, a2, result;
    char oper;
    std::cout << "请输入简单的运算式:\n";
    std::cin >> a1 >> oper >> a2;
    switch (oper) {
    case '+':
        result = a1 + a2;
        break;

    case '-':
        result = a1 - a2;
        break;

    case '*':
        result = a1 * a2;
        break;

    case '/':
        result = a1 / a2;
        break;

    default:
        std::cout << "输入错误的运算符!\n";
        return 0;
    }
    std::cout << a1 << oper << a2 << '=' << result << '\n';
    return 0;
}
