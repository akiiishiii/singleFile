// s14_1.cpp
#include <cmath>
#include <iostream>

class Tri {
    double a, b, c; //
  public:
    Tri(double x, double y, double z) : a(x), b(y), c(z) {}
    inline double peri() { return (a + b + c); }
    double area();
    void output();
};

int main(int argc, char const *argv[]) {
    Tri tri1(3, 4, 5), tri2(5, 6, 7);
    tri1.output();
    tri2.output();
    return 0;
}

double Tri::area() {
    double s = peri() / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

void Tri::output() {
    std::cout << "三角形的边长：" << a << ' ' << b << ' ' << c
              << "\n三角形的周长：" << peri() << "\n三角形的面积：" << area()
              << "\n\n";
}
