#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n + 1), b(n + 1);
    rep(i, 1, n + 1) cin >> a[i] >> b[i];

    vector<vector<bool>> dp(n + 1, vector<bool>(x + 1, false));
    rep(i, 0, n + 1) dp[i][0] = true;
    rep(i, 1, n + 1) {
        rep(j, 1, x + 1) {
            rep(k, 0, b[i] + 1) {
                if (j < k * a[i]) continue;
                if (dp[i - 1][j - k * a[i]]) dp[i][j] = true;
            }
        }
    }
    if (dp[n][x] == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main() {
    _main();
}
