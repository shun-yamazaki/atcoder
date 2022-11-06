#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    string s;
    cin >> s;
    int ans = -1;
    rep(i, 0, s.length()) {
        char c = s[i];
        if (c == 'a') ans = i + 1;
    }
    cout << ans << endl;
}

int main() {
    _main();
}
