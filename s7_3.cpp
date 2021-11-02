// s7_3.cpp
#include <iostream>

bool isprime(int num);

int main(int argc, char const *argv[]) {
    int n;
    std::cin >> n;
    for (int i = 2; i <= n / 2; i++)
        if (isprime(i) && isprime((n - i)))
            std::cout << n << '=' << i << '+' << n - i << '\n';
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
