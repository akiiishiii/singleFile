// s7_4.cpp
#include <iostream>

int fun(int num);

int main(int argc, char const *argv[]) {
    int n;
    while (std::cout << "请输入一个整数(输入0结束): ", std::cin >> n, n)
        std::cout << n << " 的各位数之积为 " << fun(n) << '\n';
    return 0;
}

int fun(int num) {
    int ret = 1;
    while (num) {
        ret *= num % 10;
        num /= 10;
    }
    return ret;
};
