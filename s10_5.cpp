// s10_5.cpp
#include <iostream>

inline void solve(int tot[10], int num);

int main(int argc, char const *argv[]) {
    int cnt[10] = {0}, a[] = {5, 26, 98, 77, 1, 27, 30};
    for (auto i : a) {
        std::cout << i << ' ';
        solve(cnt, i);
    }
    std::cout << '\n';
    for (int i = 0; i <= 9; i++)
        std::cout << i << "  " << cnt[i] << '\n';
    return 0;
}

inline void solve(int tot[10], int num) {
    while (num) {
        tot[num % 10]++;
        num /= 10;
    }
}
