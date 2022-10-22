#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n;
    cin >> n;
    vector<int> ans(2 * n + 2, 0);
    rep(i, 1, n + 1) {
        int a;
        cin >> a;
        ans[2 * i] = ans[a] + 1;
        ans[2 * i + 1] = ans[a] + 1;
    }
    rep(i, 1, 2 * n + 2) cout << ans[i] << endl;
}

int main() {
    _main();
}
