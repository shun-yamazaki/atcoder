#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    ll x;
    int k;
    cin >> x >> k;
    ll pow10 = 1;
    rep(i, 0, k) {
        x /= pow10;
        ll m = x % 10;
        if (m >= 5) {
            x += 10 - m;
        } else {
            x -= m;
        }
        x *= pow10;
        pow10 *= 10;
    }
    cout << x << endl;
}

int main() {
    _main();
}
