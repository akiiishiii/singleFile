// T1.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    std::cout.sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;
    n++;
    std::cout << ((n % 12) ? (n / 12) * 4 + 2 : (n / 12) * 4 - 2) << '\n';
    return 0;
}
