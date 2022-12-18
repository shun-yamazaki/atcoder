#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

using Graph = vector<vector<int>>;

bool dfs(const Graph &G, vector<int> &color, int v, int cur = 0) {
    color[v] = cur;

    for (auto next_v : G[v]) {
        if (color[next_v] != -1) {
            if (color[next_v] == cur) return false;
            continue;
        }

        if (!dfs(G, color, next_v, 1 - cur)) return false;
    }
    return true;
}

void _main() {
    int N, M;
    cin >> N >> M;
    Graph G(N + 1);
    rep(i, 0, M) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> color(N + 1, -1);
    bool can_bipartite = true;
    for (int v = 1; v < N + 1; v++) {
        if (color[v] != -1) continue;
        if (!dfs(G, color, v)) can_bipartite = false;
    }

    if (!can_bipartite) {
        cout << 0 << endl;
        return;
    }

    int black = 0;
    int white = 0;
    int alone = 0;
    rep(i, 1, N + 1) {
        if (color[i] == 0) black++;
        if (color[i] == 1) white++;
        if (color[i] == -1) alone++;
    }
    int ans = 0;
    for (int v = 1; v < N + 1; v++) {
        if (color[v] == 1) {
            ans += (black - G[v].size());
        } else if (color[v] == 0) {
            ans += (white - G[v].size());
        }
    }
    ans = ans / 2 + (N - alone) * alone + alone * (alone - 1) / 2;
    cout << ans << endl;
}

int main() {
    _main();
}
