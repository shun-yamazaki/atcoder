#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

vector<char> s(10000000);
ll a, b;

ll palindrome(int left, int right, int mid, ll a_num) {
    int b_num = 0;
    rep(i, 0, mid) {
        if (s[left + i] != s[right - 1 - i]) {
            b_num++;
        }
    }
    return a_num * a + b_num * b;
}

void _main() {
    int n;
    cin >> n >> a >> b;
    rep(i, 0, n) cin >> s[i];
    rep(i, 0, n) s[n + i] = s[i];
    int mid = n / 2;

    ll ans = LLONG_MAX;
    rep(i, 0, n) {
        int left = i;
        int right = i + n;
        ans = min(ans, palindrome(left, right, mid, i));
    }
    cout << ans << endl;
}

int main() {
    _main();
}
