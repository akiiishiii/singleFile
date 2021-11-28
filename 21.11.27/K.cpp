// K.cpp
#include <cstdio>

int main(int argc, char const *argv[]) {
	double a, b, c, d;
	double tot = 0.0, ans1, ans2, ans3;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	tot = a * 16.0 + b * 12.0 + c + d / 4.0;
	ans1 = a * 0.24 * 12;
	ans2 = tot / 12.0 * 0.24 * 12;
	tot -= c;
	ans3 = tot / 12.0 * 0.24 * 12;
	printf("%.2lf %.2lf %.2lf\n", ans1, ans2, ans3);
	return 0;
}

