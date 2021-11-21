// s11_1.cpp
#include <cctype>
#include <iostream>

int main(int argc, char const *argv[]) {
    char s[200];
    std::cout << "请输入一行字符串: \n";
    std::cin.getline(s, 200);
    int cntUpper = 0, cntLower = 0, cntDigit = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i]))
            cntUpper++;
        else if (islower(s[i]))
            cntLower++;
        else if (isdigit(s[i]))
            cntDigit++;
    }
    std::cout << "大写字符个数: " << cntUpper << ' '
              << "小写字符个数: " << cntLower << ' '
              << "数字字符个数: " << cntDigit << '\n';
    return 0;
}
