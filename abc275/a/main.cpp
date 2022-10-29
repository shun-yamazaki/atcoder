#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, 0, n) cin >> h[i];
    int m = 0;
    rep(i, 0, n) m = h[i] > h[m] ? i : m;
    cout << m + 1 << endl;
}

int main() {
    _main();
}
