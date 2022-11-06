#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];
    vector<int> two(n, 0);
    vector<int> three(n, 0);
    vector<int> r(n);
    rep(i, 0, n) {
        ll x = a[i];
        while (x % 2 == 0) {
            two[i]++;
            x /= 2;
        }
        while (x % 3 == 0) {
            three[i]++;
            x /= 3;
        }
        r[i] = x;
    }
    rep(i, 1, n) {
        if (r[i - 1] != r[i]) {
            cout << -1 << endl;
            return;
        }
    }

    sort(all(two));
    sort(all(three));
    int ans = 0;
    rep(i, 1, n) {
        ans += two[i] - two[0];
        ans += three[i] - three[0];
    }
    cout << ans << endl;
}

int main() {
    _main();
}
