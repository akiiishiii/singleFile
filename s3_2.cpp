// s3_2.cpp
#include <iostream>

inline int cube(int x) { return x * x * x; }

int main(int argc, char const *argv[]) {
    int num = 0;
    for (int i = 1; i <= 9; i++)
        for (int j = 0; j <= 9; j++)
            for (int k = 0; k <= 9; k++) {
                num = 100 * i + 10 * j + k;
                if (num == cube(i) + cube(j) + cube(k))
                    std::cout << num << '\n';
            }
    return 0;
}
