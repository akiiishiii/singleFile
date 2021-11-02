// s4_5.cpp
#include <iostream>

int sumOfFactors(int num);

int main(int argc, char const *argv[]) {
    for (int i = 2; i <= 1000; i++)
        if (sumOfFactors(i) == i)
            std::cout << i << '\n';
    return 0;
}

int sumOfFactors(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++)
        if (!(num % i))
            sum = sum + (i * i == num ? i : i + (num / i));
    return sum;
}
