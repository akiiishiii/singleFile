// s12_3.cpp
#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <utility>

int main(int argc, char const *argv[]) {
    std::array<int, 16> a{55};
    for (int i = 1; i < int(a.size()); i++)
        a[i] = (15 * a[i - 1] + 97) % 256;
    double ave = 0;
    std::cout << "array:\n";
    for (auto const &i : a) {
        std::cout << i << ' ';
        ave += i;
    }
    std::cout << "\nmax=" << *std::max_element(a.begin(), a.end())
              << "\nave=" << (ave /= a.size()) << '\n';
    std::pair<std::array<int, 16>::const_iterator, double> *maxElement =
        new std::pair<std::array<int, 16>::const_iterator, double>(
            std::make_pair(a.begin(), abs(*a.begin()) - ave));
    for (auto i = a.begin(); i != a.end(); i++)
        if (abs(*i) - ave > maxElement->second)
            *maxElement = std::make_pair(i, abs(*i) - ave);
    for (auto i = a.begin(); i != a.end(); i++)
        if (i != maxElement->first)
            std::cout << *i << ' ';
    std::cout << '\n';
    delete maxElement;
    return 0;
}
