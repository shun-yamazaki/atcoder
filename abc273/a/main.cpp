#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n;
    cin >> n;
    int ans = 1;
    rep(i, 0, n) {
        ans *= i + 1;
    }
    cout << ans << endl;
}

int main() {
    _main();
}
