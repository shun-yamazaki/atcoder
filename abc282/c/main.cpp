#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int N;
    string S;
    cin >> N;
    cin >> S;

    string ans;
    bool inner = false;
    rep(i, 0, N) {
        char c = S[i];
        if (c == '"') inner = !inner;
        if (c == ',' && !inner)
            ans += '.';
        else
            ans += c;
    }
    cout << ans << endl;
}

int main() {
    _main();
}
