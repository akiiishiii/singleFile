// s3_5.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    int num, res = 0;
    std::cin >> num;
    std::cout << num;
    while (num) {
        res += num % 10;
        num /= 10;
    }
    std::cout << "的各位数之和=" << res;
    return 0;
}
