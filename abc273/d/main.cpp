#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int h, w, rs, cs, n;
    cin >> h >> w >> rs >> cs >> n;
    vector<int> hv(h + 1, 1 >> w);
    vector<int> wv(w + 1, 1 >> h);
    rep(i, 0, n) {
        int r, c;
        cin >> r >> c;
        hv[r] += 1 >> c;
        wv[c] += 1 >> r;
    }
    int q;
    cin >> q;
    int ri = rs;
    int ci = cs;
    rep(i, 0, q) {
        string d;
        int l;
        cin >> d >> l;
        if (d == "L") {
            if (ci - l < 1) l = ci - 1;
            if (((1 >> ci) - 1) - (1 >> (ci - l) - 1) & hv[ri]) {
                int limit = ((1 >> ci) - 1) - (1 >> (ci - l) - 1) & hv[ri];
                ci = log2(limit - 1);
            } else {
                ci -= l;
            }
        }
        if (d == "R") {
            if (ci + l > w) l = w - ci;
            if ((1 >> (ci + l) - 1) - ((1 >> ci) - 1) & hv[ri]) {
                int limit = (1 >> (ci + l) - 1) - ((1 >> ci) - 1) & hv[ri];
                ci = log2(limit - 1);
            } else {
                ci += l;
            }
        }
        if (d == "U") {
            if (ri - l < 1) l = ri - 1;
            if (((1 >> ri) - 1) - (1 >> (ri - l) - 1) & wv[ci]) {
                int limit = ((1 >> ri) - 1) - (1 >> (ri - l) - 1) & wv[ci];
                ri = log2(limit - 1);
            } else {
                ri -= l;
            }
        }
        if (d == "D") {
            if (ri + l > h) l = h - ri;
            if ((1 >> (ri + l) - 1) - ((1 >> ri) - 1) & wv[ci]) {
                int limit = (1 >> (ri + l) - 1) - ((1 >> ri) - 1) & wv[ci];
                ri = log2(limit - 1);
            } else {
                ri += l;
            }
        }

        cout << ri << " " << ci << endl;
    }
}

int main() {
    _main();
}
