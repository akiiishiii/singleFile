// G.cpp
#include <iostream>
#include <set>

int main(int argc, char const *argv[]) {
	std::cout.sync_with_stdio(false);
	std::cin.tie(nullptr);
	int T, opt, num, i;
	std::multiset<int> s;
	std::cin >> T;
	while (T--) {
		std::cin >> opt >> num;
		if (opt & 1)
			s.insert(num);
		else {
			i = 0;
			auto p = s.upper_bound(num);
			for (auto q = s.end(); q != p; i++, q--);
			std::cout << i + 1 << '\n';
		}
	}
	return 0;
}

