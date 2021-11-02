/**
 * @file test.cpp
 * @author He Qiujie (patrick233@qq.com)
 * @brief File of tests
 * @version 0.1
 * @date 2021-09-07
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
    int *p = new int;
    int const *Q = new int(100);

    std::vector<int> t = {1, 2, 3};
    std::cin >> *p;
    if (*p != *Q)
        std::cout << "Not 100. \n";
    for (auto &tt : t)
        std::cout << tt++;
    delete p;
    delete Q;
    std::cout << __cplusplus << '\n';
    return 0;
}
