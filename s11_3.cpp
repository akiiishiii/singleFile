// s11_2.cpp
#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
    std::string s;
    int cnt = 0;
    while (std::cin >> s) {
        cnt++;
        if (std::cin.get() == '\n')
            break;
    }
    std::cout << "num=" << cnt;
    return 0;
}
