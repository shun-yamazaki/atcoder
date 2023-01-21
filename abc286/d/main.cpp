#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

using Coin = map<int, int>;
struct Dp {
    bool b;
    Coin c;
};

void _main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n + 1), b(n + 1);
    int sum = 0;
    rep(i, 1, n + 1) {
        cin >> a[i] >> b[i];
        sum += b[i];
    }

    vector<vector<Dp>> dp(x + 1, vector<Dp>(sum + 1));
    rep(i, 1, x + 1) {
        rep(j, 1, sum + 1) {
            rep(k, 1, n + 1) {
                int p = a[k];
                if (dp[i - p][j - 1].b == true) {
                    Dp tmp = dp[i - p][j - 1];
                    if (tmp.c[p] < b[p]) {
                        dp[i][j].c = tmp.c;
                        dp[i][j].c[p]++;
                        dp[i][j].b = true;
                    }
                }
            }
        }
    }
    rep(i, 1, sum + 1) {
        if (dp[x][i].b == true) {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

int main() {
    _main();
}
