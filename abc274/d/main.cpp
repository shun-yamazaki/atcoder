#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n, x, y, a1;
    cin >> n >> x >> y >> a1;
    vector<int> xd(n / 2), yd(n / 2);
    rep(i, 1, n) {
        if (i % 2 == 0) {
            cin >> xd[i / 2];
        } else {
            cin >> yd[i / 2];
        }
    }

    bool x_ok = false;
    for (int bit = 0; bit < (1 << (n / 2)); bit++) {
        int px = a1;
        for (int i = 0; i < (n / 2); i++) {
            if (bit & (1 << i))
                px += xd[i];
            else
                px -= xd[i];
        }
        if (px == x) {
            x_ok = true;
            break;
        }
    }
    if (!x_ok) {
        cout << "No" << endl;
        return;
    }

    bool y_ok = false;
    for (int bit = 0; bit < (1 << (n / 2)); bit++) {
        int py = 0;
        for (int i = 0; i < (n / 2); i++) {
            if (bit & (1 << i))
                py += yd[i];
            else
                py -= yd[i];
        }
        if (py == y) {
            y_ok = true;
            break;
        }
    }
    if (!y_ok) {
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;
    return;
}

int main() {
    _main();
}
