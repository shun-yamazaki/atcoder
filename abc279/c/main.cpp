#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    vector<string> T(H);
    rep(i, 0, H) cin >> S[i];
    rep(i, 0, H) cin >> T[i];

    vector<string> Sr(W);
    vector<string> Tr(W);
    rep(i, 0, H) rep(j, 0, W) {
        Sr[j] += S[i][j];
        Tr[j] += T[i][j];
    }
    unordered_map<string, int> Sc, Tc;
    rep(i, 0, W) {
        Sc[Sr[i]]++;
        Tc[Tr[i]]++;
    }

    bool ans = true;
    for (auto p : Sc) {
        if (Tc[p.first] != p.second) {
            ans = false;
            break;
        };
    }
    cout << (ans ? "Yes" : "No") << endl;
}

int main() {
    _main();
}
