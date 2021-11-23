// s11_2.cpp
#include <cctype>
#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <utility>
#include <vector>

struct Compare : public std::binary_function<std::string, std::string, bool> {
    bool operator()(std::string const &a, std::string const &b) {
        return a.length() < b.length();
    }
};

int main(int argc, char const *argv[]) {
    std::string str = "Apple$12pear  watermelon $  #  Banana";
    std::priority_queue<std::string, std::vector<std::string>, Compare> h;
    std::string tmps;
    for (auto const &tmpc : str) {
        if (isalpha(tmpc))
            tmps.push_back(tmpc);
        else if (!tmps.empty()) {
            h.push(tmps);
            tmps.clear();
        }
    }
    std::cout << "maxstring=" << h.top() << '\n';
    return 0;
}
