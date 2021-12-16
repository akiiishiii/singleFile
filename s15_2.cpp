// s15_2.cpp
#include <iostream>

class Num {
    int n, count;
    int *p;

  public:
    Num(int num);
    ~Num();
    int d(int num);
    void fun();
    void print();
};

int main(int argc, char const *argv[]) {
    int x;
    std::cout << "请输入一个正整数：";
    std::cin >> x;
    Num num(x);
    num.fun();
    num.print();
    return 0;
}

Num::Num(int num) {
    n = num;
    p = new int[n + 1];
    for (int i = 1; i <= n; i++)
        *(p + i) = 0;
    count = n;
}

Num::~Num() {
    if (p)
        delete[] p;
}

int Num::d(int num) {
    int t = num;
    while (num) {
        t += num % 10;
        num /= 10;
    }
    return t;
}

void Num::fun() {
    int t;
    for (int i = 1; i <= n; i++) {
        t = d(i);
        if (t <= n && p[t] == 0) {
            p[t] = 1;
            count -= 1;
        }
    }
}

void Num::print() {
    std::cout << "不大于" << n << "的自身数有" << count << "个：\n";
    for (int i = 1; i <= n; i++)
        if (!p[i])
            std::cout << i << ' ';
}
