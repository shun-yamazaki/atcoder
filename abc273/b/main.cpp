#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    ll x;
    int k;
    cin >> x >> k;
    rep(i, 0, k) {
        ll y = 10;
        rep(j, 0, i) y *= 10;
        ll m = x % y;
        if (m >= y / 10 * 5)
            x = x - m + y;
        else
            x -= m;
    }
    cout << (x < 0 ? 0 : x) << endl;
}

int main() {
    _main();
}
