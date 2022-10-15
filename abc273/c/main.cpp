#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    rep(i, 1, n + 1) cin >> a[i];
    sort(all(a), greater<int>());

    int before = a[0];
    int count = 0;
    int k = n;
    rep(i, 0, n) {
        if (before == a[i]) {
            count++;
        } else {
            cout << count << endl;
            count = 1;
            before = a[i];
            k--;
        }
    }
    cout << count << endl;
    rep(i, 1, k) cout << 0 << endl;
}

int main() {
    _main();
}
