#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n, k;
    cin >> n >> k;
    if (n < k) {
        rep(i, 0, n) cout << 0 << " ";
        return;
    }
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, k, n) cout << a[i] << " ";
    rep(i, 0, k) cout << 0 << " ";
}

int main() {
    _main();
}
