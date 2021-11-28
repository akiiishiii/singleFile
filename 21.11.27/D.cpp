// D.cpp
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

int const S = 8;
long long mult_mod(long long a, long long b, long long c);
long long pow_mod(long long a, long long n, long long mod);
bool check(long long a, long long n, long long x, long long t);
bool Miller_Rabin(long long n);

int main(int argc, char const *argv[]) {
	std::cout.sync_with_stdio(false);
	std::cin.tie(nullptr);
	int T;
	long long n;
	bool flag;
	std::cin >> T;
	while (T--) {
		flag = false;
		std::cin >> n;
		for (long long i = n + 1; i < 2 * n; i++)
			if (Miller_Rabin(i)) {
				std::cout << "Yes\n";
				flag = true;
				break;
			}
		if (!flag)
			std::cout << "No\n";
	}
	return 0;
}

long long mult_mod(long long a, long long b, long long c) {
	a %= c;
	b %= c;
	long long ret = 0, tmp = a;
	while (b) {
		if (b & 1) {
			ret += tmp;
			if (ret > c)
				ret -= c;
		}
		tmp <<= 1;
		if (tmp > c)
			tmp -= c;
		b >>= 1;
	}
	return ret;
}

long long pow_mod(long long a, long long n, long long mod) {
	long long ret = 1, temp = a % mod;
	while (n) {
		if (n & 1)
			ret = mult_mod(ret, temp, mod);
		temp = mult_mod(temp, temp, mod);
		n >>= 1;
	}
	return ret;
}

bool check(long long a, long long n, long long x, long long t) {
	long long ret = pow_mod(a, x, n);
	long long last = ret;
	for (int i = 1; i <= t; i++) {
		ret = mult_mod(ret, ret, n);
		if (ret == 1 && last != 1 && last != n - 1)
			return true;
		last = ret;
	}
	if (ret != 1)
		return true;
	else
		return false;
}

bool Miller_Rabin(long long n) {
	if (n < 2)
		return false;
	if (n == 2)
		return true;
	if (!(n & 1))
		return false;
	long long x = n - 1, t = 0;
	while (!(x & 1)) {
		x >>= 1;
		t++;
	}
	srand((unsigned)time(NULL));
	for (int i = 0; i < S; i++) {
		long long a = rand() % (n - 1) + 1;
		if (check(a, n, x, t))
			return false;
	}
	return true;
}
