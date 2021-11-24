// T6.cpp
#include <iostream>

int const Mod = 998244353, Maxn = 200000;
int a[Maxn + 5], b[Maxn + 5], n, ans = 0;

int power(int a, int b);
inline int inv(int x) { return power(x, Mod - 2); }
long long C(int n, int m);

int main(int argc, char const *argv[]) {
    std::cout.sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cin >> n;
    for (int i = 1; i <= n; i++)
        std::cin >> a[i] >> b[i];
    // Force
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int i1 = 0; i1 <= a[i]; i1++)
                for (int j1 = 0; j1 <= b[i]; j1++)
                    for (int i2 = 0; i2 <= a[j]; i2++)
                        for (int j2 = 0; j2 <= b[j]; j2++)
                            if (i1 + j1 + i2 + j2)
                                ans = (ans +
                                       C(i1 + j1 + i2 + j2, i1 + i2) % Mod) %
                                      Mod;
    std::cout << ans << '\n';
    return 0;
}

int power(int a, int b) {
    int ret = 1;
    while (b) {
        if (b & 1)
            ret = 1ll * ret * a % Mod;
        a = 1ll * a * a % Mod;
        b >>= 1;
    }
    return ret;
}

long long C(int n, int m) {
    if (!m)
        return 1ll;
    if (m > n - m)
        m = n - m;
    long long up = 1ll, down = 1ll;
    for (int i = 1; i <= m; i++) {
        up = (up * (n - i + 1ll)) % Mod;
        down = (down * i) % Mod;
    }
    return up * inv(down) % Mod;
}
