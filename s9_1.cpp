// s9_1.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    int row = 0, colum = 0, max;
    int a[4][4] = {
        {5, 12, 23, 56}, {19, 28, 37, 46}, {-12, -34, 6, 8}, {4, 6, 34, 1}};
    max = a[0][0];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (a[i][j] > max) {
                max = a[i][j];
                row = i;
                colum = j;
            }
    std::cout << "max=" << max << ",row=" << row << ",colum=" << colum << '\n';
    return 0;
}
