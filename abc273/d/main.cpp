#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int h, w, rs, cs, n;
    cin >> h >> w >> rs >> cs >> n;
    map<int, vector<int>> hmap;
    map<int, vector<int>> wmap;
    int r, c;
    rep(i, 0, n) {
        cin >> r >> c;
        hmap[r].push_back(c);
        wmap[c].push_back(r);
    }
    for (auto &map : wmap) sort(all(map.second));
    for (auto &map : hmap) sort(all(map.second));

    int q;
    cin >> q;
    int ri = rs;
    int ci = cs;
    string d;
    int l, next;
    rep(i, 0, q) {
        cin >> d >> l;
        if (d == "L") {
            if (hmap[ri].empty()) {
                ci -= l;
            } else {
                auto itr = lower_bound(all(hmap[ri]), ci);
                if (itr == hmap[ri].begin()) {
                    ci -= l;
                } else {
                    ci = max(ci - l, *itr + 1);
                }
            }
            ci = ci < 1 ? 1 : ci;
        }
        if (d == "R") {
            if (hmap[ri].empty()) {
                ci += l;
            } else {
                auto itr = upper_bound(all(hmap[ri]), ci);
                if (itr == hmap[ri].end()) {
                    ci += l;
                } else {
                    ci = min(ci + l, *itr - 1);
                }
            }
            ci = ci > w ? w : ci;
        }
        if (d == "U") {
            if (ri - l < 1) l = l - (1 - ri - l);
            if (wmap[ci].empty()) {
                ri -= l;
            } else {
                auto itr = lower_bound(all(wmap[ci]), ri);
                if (itr == wmap[ci].begin()) {
                    ri -= l;
                } else {
                    ri = max(ri - l, *itr + 1);
                }
            }
            ri = ri < 1 ? 1 : ri;
        }
        if (d == "D") {
            if (ri + l > w) l = l - (ri + l - w);
            if (wmap[ci].empty()) {
                ri += l;
            } else {
                auto itr = upper_bound(all(wmap[ci]), ri);
                if (itr == wmap[ci].end()) {
                    ri += l;
                } else {
                    ri = min(ri + l, *itr - 1);
                }
            }
            ri = ri > w ? w : ri;
        }

        cout << ri << " " << ci << endl;
    }
}

int main() {
    _main();
}
