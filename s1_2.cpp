// s1_2.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    double f;
    std::cout << "请输入华氏温度: ";
    std::cin >> f;
    std::cout << "摄氏温度=" << 5.0 / 9.0 * (f - 32.0) << '\n';
    return 0;
}
