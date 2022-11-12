#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

map<int, vector<int>> graph;
set<int> reach;

void _main() {
    int n;
    cin >> n;
    rep(i, 0, n) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    reach.insert(1);
    queue<int> q;
    q.push(1);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int g : graph[v]) {
            if (reach.count(g)) continue;
            reach.insert(g);
            q.push(g);
        }
    }
    cout << *reach.rbegin() << endl;
}

int main() {
    _main();
}
