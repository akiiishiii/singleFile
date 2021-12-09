// s13_4.cpp
#include <iostream>
#include <string>

int fun(char *str, char *substr);

int main(int argc, char const *argv[]) {
    char str[100], substr[100];
    std::cout << "Input string:";
    std::cin.getline(str, 100);
    std::cout << "Input substring:";
    std::cin >> substr;
    std::cout << "n=" << fun(str, substr) << '\n';
    return 0;
}

int fun(char *str, char *substr) {
    int ret = 0;
    std::string s(str);
    size_t found = -1;
    while ((found = s.find(substr, found + 1)) != std::string::npos)
        ret++;
    return ret;
}
