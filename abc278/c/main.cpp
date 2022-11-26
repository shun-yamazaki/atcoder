#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n, q;
    cin >> n >> q;
    vector<int> t(q), a(q), b(q);
    rep(i, 0, q) cin >> t[i] >> a[i] >> b[i];
    set<pair<int, int>> graph;
    rep(i, 0, q) {
        if (t[i] == 1) {
            graph.insert({a[i], b[i]});
        }
        if (t[i] == 2) {
            graph.erase({a[i], b[i]});
        }
        if (t[i] == 3) {
            bool yes = graph.count({a[i], b[i]}) && graph.count({b[i], a[i]});
            cout << (yes ? "Yes" : "No") << endl;
        }
    }
}

int main() {
    _main();
}
