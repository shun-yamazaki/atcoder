#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n, x, y;
    cin >> n >> x >> y;
    x += 10000;
    y += 10000;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<bool> dpx(20001, false), dpy(20001, false);
    dpx[a[0] + 10000] = true;
    dpy[10000] = true;
    for (int i = 1; i < a.size(); i++) {
        vector<bool> nextdp(20001, false);
        if (i % 2 == 0) {
            for (int j = 0; j < dpx.size(); j++) {
                if (dpx[j] && j + a[i] < dpx.size()) {
                    nextdp[j + a[i]] = true;
                }
                if (dpx[j] && j - a[i] >= 0) {
                    nextdp[j - a[i]] = true;
                }
            }
            dpx = nextdp;
        } else {
            for (int j = 0; j < dpy.size(); j++) {
                if (dpy[j] && j + a[i] < dpy.size()) {
                    nextdp[j + a[i]] = true;
                }
                if (dpy[j] && j - a[i] >= 0) {
                    nextdp[j - a[i]] = true;
                }
            }
            dpy = nextdp;
        }
    }

    cout << (dpx[x] && dpy[y] ? "Yes" : "No") << endl;
    return;
}

int main() {
    _main();
}
