#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int N, K;
ll L;
vector<ll> A(100000);

ll count_pieces(ll min_length) {
    ll count = 0, prev_cut = 0;
    rep(i, 0, N) {
        if (A[i] - prev_cut >= min_length && L - A[i] >= min_length) {
            count++;
            prev_cut = A[i];
        }
    }
    return count;
}

void _main() {
    cin >> N >> L >> K;
    rep(i, 0, N) cin >> A[i];

    // 分割したピースがすべて [left, right) の範囲に収まればスコアは left になる
    ll left = 1;
    ll right = L + 1;
    while (right - left > 1) {
        ll mid = (left + right) / 2;
        // mid 以上の長さのピース K + 1 個に分割できる
        if (count_pieces(mid) >= K) {
            left = mid;
        } else {
            right = mid;
        }
    }
    cout << left << endl;
}

int main() {
    _main();
}
