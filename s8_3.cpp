// s8_3.cpp
#include <iostream>
#include <queue>
#include <utility>

int main(int argc, char const *argv[]) {
    int a[10] = {2, 5, 78, 4, 6, 3, 89, 12, 15, 34};
    std::priority_queue<std::pair<int, int>> h;
    for (int i = 0; i < 10; i++)
        h.push(std::make_pair(a[i], i + 1));
    std::cout << "max=" << h.top().first << "\nmaxindex=" << h.top().second
              << '\n';
    return 0;
}
