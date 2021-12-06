// s13_4.cpp
#include <iostream>
#include <string>

int fun(char *str, char *substr);

int main(int argc, char const *argv[]) {

    std::cout << "Input string:";

    return 0;
}

int fun(char *str, char *substr) {
    int ret = 0;
    std::string s(str), subs(substr);
    size_t found = std::string::npos;
    while ((found == s.find(subs)))
}
