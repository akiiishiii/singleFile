// s14_2.cpp
#include <iostream>

class Number {
  private:
    int n;
    int *p;

  public:
    Number(int n1);
    ~Number();
    void fun();
    void print();
};

bool notPrime(int x);

int main(int argc, char const *argv[]) {
    Number num(10);
    num.fun();
    num.print();
    return 0;
}

Number::Number(int n1) {
    n = n1;
    p = new int[n];
}

Number::~Number() {
    if (p)
        delete[] p;
}

void Number::fun() {
    for (int i = 3, j; 1; i++) {
        j = 0;
        while (notPrime(j) && j < n)
            p[j++] = i++;
        if (j == n)
            break;
    }
}
void Number::print() {
    for (int i = 0; i < n; i++)
        std::cout << p[i] << ' ';
    std::cout << '\n';
}

bool notPrime(int x) {
    for (int i = 2; i <= x / 2; i++)
        if (!(x % i))
            return true;
    return false;
}
