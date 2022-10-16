#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n, a;
    cin >> n;
    map<int, int> m;
    rep(i, 1, n + 1) cin >> a, m[a]++;
    for (auto i = m.rbegin(); i != m.rend(); i++) {
        cout << i->second << endl;
    }
    rep(i, 0, n - m.size()) cout << 0 << endl;
}

int main() {
    _main();
}
