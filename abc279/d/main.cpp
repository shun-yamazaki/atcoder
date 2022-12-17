#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    double a, b;
    cin >> a >> b;
    if (a < b) {
        cout << a << endl;
        return;
    }
    ll c = sqrt(a) - b;
    double ans = min((a / sqrt(c + 1) + b * c), (a / sqrt(c + 2) + b * (c + 1)));
    cout << ans << endl;
}

int main() {
    cout << std::fixed << std::setprecision(10);
    _main();
}
