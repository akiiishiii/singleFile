// s12_2.cpp
#include <cmath>
#include <iostream>

inline double f1(double x) { return 1.0 / (2 + sin(x)); }
inline double f2(double x) { return 1.0 / (2 - cos(x)); }
inline double f3(double x) { return (1 + x) / (1 + x * x); }

double integral(double (*function)(double x), int count, double lowerBound,
                double upperBound);

int main(int argc, char const *argv[]) {
    std::cout << "f1(x): n=1000  " << integral(f1, 1000, 1.0, 2.0)
              << "\nf2(x): n=2000  " << integral(f2, 2000, 2.0, 3.0)
              << "\nf3(x): n=3000  " << integral(f3, 3000, 2.0, 4.0) << '\n';
    return 0;
}

double integral(double (*function)(double x), int count, double lowerBound,
                double upperBound) {
    double h = (upperBound - lowerBound) / count;
    double result = (function(upperBound) + function(lowerBound)) / 2;
    for (int i = 1; i < count; i++)
        result += function(lowerBound + i * h);
    result *= h;
    return result;
}
