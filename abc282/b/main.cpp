#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N, "");
    rep(i, 0, N) cin >> S[i];
    int ans = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int tmp = 0;
            for (int k = 0; k < M; k++) {
                if (S[i][k] == 'o' || S[j][k] == 'o') tmp++;
            }
            if (tmp == M) ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    _main();
}
