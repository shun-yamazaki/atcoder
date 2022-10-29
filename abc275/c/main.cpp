#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    vector<vector<char>> s(9, vector<char>(9));
    rep(i, 0, 9) {
        rep(j, 0, 9) cin >> s[i][j];
    }
    int ans = 0;
    char p = '#';
    rep(i, 0, 9) rep(j, 0, 9) {
        if (s[i][j] == p) {
            rep(k, j + 1, 9) {
                if (s[i][k] == p) {
                    int d = k - j;
                    if (i + d < 9 && s[i + d][j] == p && s[i + d][k] == p) ans++;
                }
            }
        }
    }
    int t = 0;
    rep(i, 0, 9) rep(j, 0, 9) {
        if (s[i][j] == p) {
            rep(k, i + 1, 9) rep(l, 0, 9) {
                if (l == j) continue;
                if (s[k][l] == p) {
                    int xd = l - j > 0 ? l - j : j - l;
                    int yd = k - i;
                    int a = j > l ? i + xd : i - xd, b = j > l ? j + yd : j - yd;
                    int c = j > l ? k + xd : k - xd, d = j > l ? l + yd : l - yd;
                    if (a > 0 && a < 9 && b > 0 && b < 9 && c > 0 && c < 9 && d > 0 && d < 9 && s[a][b] == p && s[c][d] == p) {
                        ans++;
                        if (xd == yd) t++;
                    }
                };
            }
        };
    }

    cout << ans - t / 2 << endl;
}

int main() {
    _main();
}
