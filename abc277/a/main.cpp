#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n, x;
    cin >> n >> x;
    rep(i, 1, n + 1) {
        int p;
        cin >> p;
        if (p == x) {
            cout << i << endl;
            return;
        }
    }
}

int main() {
    _main();
}
