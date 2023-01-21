#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    for (int i = 0; i <= q - p; i++) {
        swap(a[p + i - 1], a[r + i - 1]);
    }
    rep(i, 0, n) cout << a[i] << " ";
}

int main() {
    _main();
}
