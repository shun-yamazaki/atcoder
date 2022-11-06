#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, 0, n) cin >> p[i];

    for (auto i = p.end() - 1; i != p.begin(); i--) {
        if (*(i - 1) > *i) {
            auto j = lower_bound(i, p.end(), *(i - 1));
            swap(*(i - 1), *(j - 1));
            sort(i, p.end(), greater());
            break;
        }
    }
    for (auto value : p) {
        cout << value << " ";
    }
}

int main() {
    _main();
}
