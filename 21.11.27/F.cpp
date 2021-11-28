// F.cpp
#include <iostream>
#include <queue>

int const Maxn = 1000000;
int n, a[Maxn + 5];
std::deque<int> lis;

int main(int argc, char const *argv[]) {
	std::cout.sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cin >> n;
	for (int i = 1; i <= n; i++)
		std::cin >> a[i];
	lis.push_back(a[1]);
	for (int i = 2; i <= n; i++)
		if (a[i] <= lis.front())
			lis.push_front(a[i]);
		else
			lis.push_back(a[i]);
	for (auto & i : lis)
		std::cout << i << ' ';
	std::cout << '\n';
	return 0;
}

