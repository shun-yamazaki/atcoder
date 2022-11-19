#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int H, M;
    cin >> H >> M;
    int h1 = H / 10, h2 = H % 10, m1 = M / 10, m2 = M % 10;
    bool b = false;
    int h, m;
    while (!b) {
        h = 10 * h1 + m1;
        m = 10 * h2 + m2;
        if (h < 24 && m < 60) {
            b = true;
        } else {
            M = (M + 1) % 60;
            if (M == 0) H = (H + 1) % 24;
            h1 = H / 10, h2 = H % 10, m1 = M / 10, m2 = M % 10;
        }
    }
    cout << h1 * 10 + h2 << " " << m1 * 10 + m2 << endl;
}

int main() {
    _main();
}
