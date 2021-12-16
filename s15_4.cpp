// s15_4.cpp
#include <iostream>

class Num {
  private:
    int n, count;
    int *p;

  public:
    Num(int num);
    ~Num();
    int isDiff(int num);
    int isSort(int num);
    void process();
    void print();
};

int main(int argc, char const *argv[]) {
    int n;
    std::cout << "Input n(n<400):";
    std::cin >> n;
    Num num(n);
    num.process();
    num.print();
    return 0;
}

Num::Num(int num) {
    n = num;
    count = 0;
    p = new int[num];
}

Num::~Num() {
    if (p)
        delete[] p;
}

int Num::isDiff(int num) {
    bool exist[10] = {false};
    while (num) {
        if (exist[num % 10])
            return false;
        exist[num % 10] = true;
        num /= 10;
    }
    return true;
}

int Num::isSort(int num) {
    int tmp = num % 10;
    num /= 10;
    while (num) {
        if (tmp < num % 10)
            return false;
        tmp = num % 10;
        num /= 10;
    }
    return true;
}

void Num::process() {
    for (int i = 1; i <= n; i++)
        if (isSort(i * i) && isDiff(i * i))
            p[count++] = i;
}

void Num::print() {
    std::cout << "在不大于100的范围内满足条件的整数及其平方数如下:\nx    x*x\n";
    for (int i = 0; i < count; i++)
        std::cout << p[i] << "    " << p[i] * p[i] << '\n';
    std::cout << "总数=" << count << '\n';
}
