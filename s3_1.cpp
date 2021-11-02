// s3_1.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    for (int i = 1; i < 30; i++)
        for (int j = 1; j < 30; j++)
            if (2 * i + 4 * j == 90 && i + j == 30)
                std::cout << "鸡=" << i << '\n' << "兔=" << j;
    return 0;
}
