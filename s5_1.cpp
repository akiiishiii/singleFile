// s5_1.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    int num = 2, sum = 0;
    for (int i = 1; i <= 7; i++) {
        sum += num;
        num = 10 * num + 2;
    }
    std::cout << "2+22+222+...+2222222=" << sum << '\n';
    return 0;
}
