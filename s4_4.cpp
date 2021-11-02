// s4_4.cpp
#include <iostream>

bool isprime(int num);

int main(int argc, char const *argv[]) {
    for (int i = 100; i <= 200; i++)
        if (isprime(i))
            std::cout << i << "  ";
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
