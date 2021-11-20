// s9_3.cpp
#include <iostream>

bool isPrime(int num);
int minPrime(int num) { return isPrime(num) ? num : minPrime(num + 1); }

int main(int argc, char const *argv[]) {
    int a[4][4] = {
        {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int cnt = 0;
    std::cout << "变换前的数组a:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            std::cout << a[i][j] << "  ";
        std::cout << '\n';
    }
    for (int i = 0; i < 4; i++)
        for (int j = 4 - 1; j >= i; j--)
            if (isPrime(a[i][j]))
                cnt++, a[i][j] = minPrime(a[i][j] + 1);
    std::cout << "变换后的数组a:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            std::cout << a[i][j] << "  ";
        std::cout << '\n';
    }
    std::cout << "素数个数=" << cnt;
    return 0;
}

bool isPrime(int num) {
    if (num == 1)
        return false;
    bool ret = true;
    for (int i = 2; i <= num / 2; i++)
        if (!(num % i)) {
            ret = false;
            break;
        }
    return ret;
}
