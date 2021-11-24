// T2.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    std::cout.sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long n;
    while (std::cin >> n)
        if (n % 3)
            std::cout << "\"even\"\n";
        else
            std::cout << "\"odd\"\n";
    return 0;
}
