// 12_4.cpp
#include <iostream>

double average(int (*coloum)[4]);
int maximum(int *array);
int mininum(int *array);

int main(int argc, char const *argv[]) {
    int a[3][4] = {{2, 3, 4, 5}, {12, 13, 14, 15}, {1, 2, 3, 4}};
    std::cout << "ave=" << average(a) << "\nmax=" << maximum(a[0])
              << "\nmin=" << mininum(a[0]) << '\n';
    return 0;
}

double average(int (*coloum)[4]) {
    double sum = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            sum += *(*(coloum + i) + j);
    return sum / 12;
}

int maximum(int *array) {
    int *tmp = array;
    int ret = *array;
    while (tmp != (array + 11)) {
        if (ret < *tmp)
            ret = *tmp;
        tmp++;
    }
    return ret;
}

int mininum(int *array) {
    int *tmp = array;
    int ret = *array;
    while (tmp != (array + 11)) {
        if (ret > *tmp)
            ret = *tmp;
        tmp++;
    }
    return ret;
}
