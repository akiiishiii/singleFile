// s3_4.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    for (int i = 3, tmp, cnt = 0; i <= 599; i += 3)
        for (tmp = i; tmp; tmp /= 10)
            if (tmp % 10 == 5) {
                if (cnt && !(cnt % 5))
                    std::cout << '\n';
                std::cout << i << ' ';
                ++cnt;
                break;
            }
    return 0;
}
