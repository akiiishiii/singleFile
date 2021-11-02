// s2_5.cpp
#include <iostream>

int main(int argc, char const argv[]) {
    float a1, a2, result;
    char oper;
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
        if (!a2) {
            std::cout << "除数不能为0\n";
            return 0;
        } else
            result = a1 / a2;
        break;

    default:
        std::cout << "输入错误的运算符!\n";
        return 0;
    }
    std::cout << a1 << oper << a2 << '=' << result << '\n';
    return 0;
}
