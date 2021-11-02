// s5_2.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    float num = 1, sum = 1;
    int n;
    std::cout << "Input n:";
    std::cin >> n;
    for (int i = 2; i <= n; i++) {
        num *= i;
        sum += num;
    }
    std::cout << "1!+2!+3!+....+" << n << "!=" << sum << '\n';
    return 0;
}
