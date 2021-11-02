// s7_2.cpp
#include <iostream>

bool isprime(int num);

int main(int argc, char const *argv[]) {
    int n;
    std::cout << "输入一个整数n: ";
    std::cin >> n;
    for (int i = 2; i <= n / 2; i++)
        if ((!(n % i)) && isprime(i))
            std::cout << i << ' ';
    std::cout << '\n';
    return 0;
}

bool isprime(int num) {
    bool ret = true;
    for (int i = 2; i < num / 2; i++)
        if (!(num % i)) {
            ret = false;
            break;
        }
    return ret;
}
