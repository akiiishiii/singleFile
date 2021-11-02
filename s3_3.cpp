// s3_3.cpp
#include <iostream>

inline int cube(int x) { return x * x * x; }

int main(int argc, char const *argv[]) {
    for (int i = 100, a0, a1, a2; i <= 999; ++i) {
        a2 = i / 100;
        a1 = i / 10 % 10;
        a0 = i % 10;
        if (i == cube(a2) + cube(a1) + cube(a0))
            std::cout << i << '\n';
    }
    return 0;
}
