#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int H, W, N, h, w, a;
    cin >> H >> W >> N >> h >> w;
    unordered_map<int, unordered_set<int>> m;
    rep(i, 1, H + 1) rep(j, 1, W + 1) {
        cin >> a;
        m[a].insert(i * 1000 + j);
    }
    rep(k, 0, H - h + 1) rep(l, 0, W - w + 1) {
        unordered_map<int, unordered_set<int>> tmp(m);
        rep(i, k + 1, k + h + 1) rep(j, l + 1, l + w + 1) {
            rep(n, 1, N + 1) {
                tmp[n].erase(i * 1000 + j);
            }
        }
        int ans = 0;
        rep(n, 1, N + 1) {
            if (tmp[n].size() > 0) ans++;
        }
        cout << ans;
        if (l == W - w)
            cout << endl;
        else
            cout << " ";
    }
}

int main() {
    _main();
}
