// s14_4.cpp
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
    ~Circle();
    void findMax();
    void show();
};

int main(int argc, char const *argv[]) {
    /* code */
    return 0;
}

Circle::Circle() {}

Circle::~Circle() {}
