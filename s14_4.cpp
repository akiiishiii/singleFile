// s14_4.cpp
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>

class Circle {
  private:
    int num[20];
    int max[4], min[4];
    int sumMax, sumMin;

  public:
    Circle();
    ~Circle() = default;
    void findMax();
    void show();
};

int main(int argc, char const *argv[]) {
    srand(/*unsigned(time(nullptr))*/ 0);
    Circle cir;
    cir.findMax();
    cir.show();
    return 0;
}

Circle::Circle() {
    for (int i = 0; i < 20; i++)
        num[i] = rand() % 100;
    sumMax = sumMin = 0;
}

void Circle::findMax() {
    int arr[20];
    for (int i = 0; i < 20; i++)
        arr[i] = i;
    std::sort(arr, arr + 20, [&](int x, int y) -> bool {
        return num[x] + num[(x + 1) % 20] + num[(x + 2) % 20] +
                   num[(x + 3) % 20] >
               num[y] + num[(y + 1) % 20] + num[(y + 2) % 20] +
                   num[(y + 3) % 20];
    });
    for (int i = 0; i < 4; i++) {
        max[i] = num[(arr[0] + i) % 20];
        min[i] = num[(arr[19] + i) % 20];
        sumMax += num[(arr[0] + i) % 20];
        sumMin += num[(arr[19] + i) % 20];
    }
}

void Circle::show() {
    for (int i = 0; i < 20; i++)
        std::cout << num[i] << ' ';
    std::cout << "\nMax=" << sumMax << '\n';
    for (int i = 0; i < 4; i++)
        std::cout << max[i] << ' ';
    std::cout << "\nMin=" << sumMin << '\n';
    for (int i = 0; i < 4; i++)
        std::cout << min[i] << ' ';
    std::cout << "\n";
}
