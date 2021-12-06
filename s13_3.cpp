// s13_3.cpp
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int solve(std::string *str, std::vector<int> *vec);

int main(int argc, char const *argv[]) {
    std::string s;
    std::vector<int> b;
    char ch;
    while ((ch = std::cin.get()) != '\n')
        s.push_back(ch);
    solve(&s, &b);
    for (auto const &i : b)
        std::cout << i << ' ';
    std::cout << '\n';
    return 0;
}

int solve(std::string *str, std::vector<int> *vec) {
    std::string *tmp = new std::string;
    for (std::string::const_iterator it = str->begin(); it - 1 != str->end();
         it++)
        if (isdigit(*it)) {
            tmp->clear();
            while (isdigit(*it))
                tmp->push_back(*(it++));
            vec->push_back(std::stoi(*tmp));
        }
    return vec->size();
}
