#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int N, Q;
    cin >> N;
    map<int, ll> A;
    rep(i, 1, N + 1) cin >> A[i];
    cin >> Q;
    int query, i;
    ll x, base = 0;
    rep(j, 0, Q) {
        cin >> query;
        if (query == 1) {
            cin >> x;
            base = x;
            A.clear();
        }
        if (query == 2) {
            cin >> i >> x;
            A[i] += x;
        }
        if (query == 3) {
            cin >> i;
            cout << A[i] + base << endl;
        }
    }
}

int main() {
    _main();
}
