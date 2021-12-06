// s13_1.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    char str[100];
    std::cout << "请输入一串数字字符：";
    std::cin.getline(str, 100);
    int i = 0, res = 0;
    while (str[i])
        res = res * 10 + str[i++] - '0';
    std::cout << res << '\n';
    return 0;
}
