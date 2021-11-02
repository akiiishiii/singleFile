// s2_2.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    int year;
    std::cout << "Input year:  ";
    std::cin >> year;
    if ((!(year % 4) && (year % 100)) || !(year % 400))
        std::cout << year << " is a leap year\n";
    else
        std::cout << year << " isn't a leap year\n";
    return 0;
}
