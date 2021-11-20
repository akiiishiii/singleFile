// s7_1.cpp
#include <iostream>

bool isPrime(int num);

int main(int argc, char const *argv[]) {
    for (int i = 100; i <= 200; i++)
        if (isPrime(i))
            std::cout << i << ' ';
    std::cout << '\n';
    return 0;
}

bool isPrime(int num) {
    bool ret = true;
    for (int i = 2; i < num / 2; i++)
        if (!(num % i)) {
            ret = false;
            break;
        }
    return ret;
}
