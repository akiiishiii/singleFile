// T5.cpp
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

typedef std::pair<int, int> Dot;
int const dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};

bool check(Dot const dots[4]);
int dist(Dot const &d1, Dot const &d2);

int main(int argc, char const *argv[]) {
    std::cout.sync_with_stdio(false);
    std::cin.tie(nullptr);
    Dot dots[4];
    for (auto &d : dots)
        std::cin >> d.first >> d.second;
    if (check(dots)) {
        std::cout << "wen\n";
        return 0;
    }
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            dots[i].first += dx[j];
            dots[i].second += dy[j];
            if (check(dots)) {
                std::cout << "hai xing\n";
                return 0;
            }
            dots[i].first -= dx[j];
            dots[i].second -= dy[j];
        }
    std::cout << "wo jue de bu xing\n";
    return 0;
}

bool check(Dot const dots[4]) {
    std::vector<int> dis;
    for (int i = 0, tmp; i < 4; i++)
        for (int j = i + 1; j < 4; j++)
            dis.push_back(dist(dots[i], dots[j]));
    std::sort(dis.begin(), dis.end());
    return dis[0] == dis[3] && dis[4] == dis[5];
}

inline int dist(Dot const &d1, Dot const &d2) {
    return (d1.first - d2.first) * (d1.first - d2.first) +
           (d1.second - d2.second) * (d1.second - d2.second);
}
