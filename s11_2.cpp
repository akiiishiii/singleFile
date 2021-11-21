// s11_2.cpp
#include <cctype>
#include <cstring>
#include <iostream>

int main(int argc, char const *argv[]) {
    char str[100];
    bool flag = false;
    std::cout << "Input a string:\n";
    std::cin.getline(str, 100);
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i]) && !flag) {
            str[i] = toupper(str[i]);
            flag = true;
        }
        if (str[i] == ' ' || str[i] == '\n')
            flag = false;
    }
    std::cout << "the result is:\n" << str << '\n';
    return 0;
}
