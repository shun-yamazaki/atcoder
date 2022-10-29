#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

ll func(vector<ll> &f, ll k) {
    if (f[k] == 0) {
        f[k / 2] = f[k / 2] == 0 ? func(f, k / 2) : f[k / 2];
        f[k / 3] = f[k / 3] == 0 ? func(f, k / 3) : f[k / 3];
        return f[k] = f[k / 2] + f[k / 3];
    } else {
        return f[k];
    }
}

void _main() {
    ll n;
    cin >> n;
    vector<ll> f(n + 1);
    f[0] = 1LL;
    cout << func(f, n) << endl;
}

int main() {
    _main();
}
