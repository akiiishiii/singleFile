// s8_4.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    bool notPrime[105] = {false};
    for (int i = 2; i <= 50; i++)
        if (!notPrime[i])
            for (int j = 2; i * j <= 100; j++)
                notPrime[i * j] = true;
    for (int i = 2; i <= 100; i++)
        if (!notPrime[i])
            std::cout << i << ' ';
    std::cout << '\n';
    return 0;
}
