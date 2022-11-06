#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n, m, a, b;
    cin >> n >> m;
    vector<set<int>> graph(n);
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        graph[a - 1].insert(b);
        graph[b - 1].insert(a);
    }
    for (int i = 0; i < n; i++) {
        set<int> result = graph[i];
        cout << result.size();
        for (auto value : result) {
            cout << " " << value;
        }
        cout << endl;
    }
}

int main() {
    _main();
}
