#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int a[14] = {0};
    rep(i, 0, 5) {
        int card;
        cin >> card;
        a[card]++;
    }
    bool three = false;
    bool two = false;
    rep(i, 1, 14) {
        if (a[i] == 2) two = true;
        if (a[i] == 3) three = true;
    }
    cout << (two && three ? "Yes" : "No") << endl;
}

int main() {
    _main();
}