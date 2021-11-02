// s4_3.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    int num;
    bool isprime = true;
    std::cout << "请输入一个正整数: ";
    std::cin >> num;
    for (int i = 2; i < num / 2; i++)
        if (!(num % i)) {
            isprime = false;
            break;
        }
    std::cout << num << (isprime ? "是" : "不是") << "素数\n";
    return 0;
}
