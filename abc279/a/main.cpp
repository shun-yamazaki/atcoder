#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    string S;
    cin >> S;
    int ans = 0;
    rep(i, 0, S.length()) {
        if (S[i] == 'v')
            ans++;
        else
            ans += 2;
    }
    cout << ans << endl;
}

int main() {
    _main();
}
