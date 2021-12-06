// s13_2.cpp
#include <algorithm>
#include <cstring>
#include <iostream>

void fun1(char *s, int n, int r);
void fun2(char *s);

int main(int argc, char const *argv[]) {
    char s[200];
    int n, r;
    std::cout << "请输入您想转换的十进制数：";
    std::cin >> n;
    std::cout << "您想将十进制数" << n << "转换成多少进制的数?";
    std::cin >> r;
    fun1(s, n, r);
    fun2(s);
    std::cout << "十进制数" << n << "转换成" << r << "进制的数，结果为：" << s
              << '\n';
    return 0;
}

void fun1(char *s, int n, int r) {
    int i = 0, t;
    while (n) {
        t = n % r;
        if (t >= 10)
            s[i++] = 'A' + (t - 10);
        else
            s[i++] = '0' + t;
        n /= r;
    }
    s[i] = '\0';
}

void fun2(char *s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
        std::swap(s[i], s[len - i - 1]);
}
