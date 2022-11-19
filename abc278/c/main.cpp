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
    map<int, set<int>> graph;
    rep(i, 0, q) {
        if (t[i] == 1) {
            graph[a[i]].insert(b[i]);
        }
        if (t[i] == 2) {
            graph[a[i]].erase(b[i]);
        }
        if (t[i] == 3) {
            bool yes = true;
            if (graph.find(a[i]) == graph.end()) yes = false;
            if (graph[a[i]].find(b[i]) == graph[a[i]].end()) yes = false;
            if (graph.find(b[i]) == graph.end()) yes = false;
            if (graph[b[i]].find(a[i]) == graph[b[i]].end()) yes = false;

            if (yes)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}

int main() {
    _main();
}
