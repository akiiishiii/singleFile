// A.cpp
#include <iostream>
#include <algorithm>

int const Maxn = 1000000;

struct man {
	int strange, num, love;
	bool operator<(man const &m) const;
} men[Maxn + 5];

int main(int argc, char const *argv[]) {
	std::cout.sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n, nums[11];
	std::cin >> n;
	for (int i = 0, a, b; i < n; i++) {
		std::cin >> a >> b;
		men[i].strange = a;
		men[i].love = b;
		men[i].num =  i + 1;
	}
	std::sort(men, men + n);
	for (int i = 0; i < 10; i++)
		nums[i] = men[i].num;
	std::sort(nums, nums + 10);
	for (int i = 0; i < 10; i++)
		std::cout << nums[i] << ' ';
	std::cout << '\n';
	return 0;
}

bool man::operator<(man const &m) const {
	if (strange != m.strange)
		return strange > m.strange;
	else if (love != m.love)
		return love > m.love;
	else
		return num < m.num;
}
