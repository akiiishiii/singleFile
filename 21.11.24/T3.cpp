// T3.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    std::cout.sync_with_stdio(false);
    std::cin.tie(nullptr);
    double x, y, a;
    std::cin >> x >> y >> a;
    a = (100 - a) / 100;
    if ((x + y) * a < (x + y / 2))
        std::cout << "Through school\n";
    else
        std::cout << "By myself\n";
    return 0;
}
