// H.cpp
#include <iostream>

int const Mod = 2021;

int main(int argc, char const *argv[]) {
	std::cout.sync_with_stdio(false);
	std::cin.tie(nullptr);
	long long n;
	int a[5] = {0, 1, 2, 4, 0};
	std::cin >> n;
	for (long long i = 4; i <= n; i++) {
		a[(i + 4) % 4] = (a[(i + 1) % 4] + a[(i + 2) % 4] + a[(i + 3) % 4]) % Mod;
		std::cout << a[(i + 4) % 4] << ' ';
	}
	//std::cout << a[(n + 4) % 4] << '\n';
	return 0;
}

