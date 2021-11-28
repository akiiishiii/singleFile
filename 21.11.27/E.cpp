// E.cpp
#include <iostream>
#include <cmath>

int main(int argc, char const *argv[]) {
	std::cout.sync_with_stdio(false);
	std::cin.tie(nullptr);
	int T;
	long long n;
	std::cin >> T;
	while (T--) {
		std::cin >> n;
		std::cout << (int)log2(n / 30 + 1) + 1 << '\n';
	}
	return 0;
}

