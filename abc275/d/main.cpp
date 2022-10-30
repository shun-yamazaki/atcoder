#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

map<ll, ll> f;

ll func(ll k) {
    if (f[k] == 0) {
        f[k / 2] = f[k / 2] == 0 ? func(k / 2) : f[k / 2];
        f[k / 3] = f[k / 3] == 0 ? func(k / 3) : f[k / 3];
        return f[k] = f[k / 2] + f[k / 3];
    } else {
        return f[k];
    }
}

void _main() {
    ll n;
    cin >> n;
    f[0] = 1LL;
    cout << func(n) << endl;
}

int main() {
    _main();
}
