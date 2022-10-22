#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int h, w;
    cin >> h >> w;
    vector<int> ans(w, 0);
    rep(i, 0, h) {
        rep(j, 0, w) {
            char c;
            cin >> c;
            if (c == '#') ans[j]++;
        }
    }
    rep(i, 0, w) cout << ans[i] << " ";
}

int main() {
    _main();
}
