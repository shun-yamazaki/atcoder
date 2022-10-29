#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    ll mod = 998244353;
    ll ans1 = (a % mod) * (b % mod) % mod * (c % mod);
    ll ans2 = (d % mod) * (e % mod) % mod * (f % mod);
    ll ans = (ans1 - ans2) % mod;
    if (ans < 0) ans += mod;
    cout << ans << endl;
}

int main() {
    _main();
}
