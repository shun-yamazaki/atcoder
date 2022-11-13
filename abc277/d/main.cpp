#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

// i 番目のカードから場に出し始めたときに手元に残るカードの合計
vector<ll> s(200001);

void _main() {
    ll n, m, a;
    cin >> n >> m;
    map<ll, ll> mp;
    ll sum = 0;
    rep(i, 0, n) {
        cin >> a;
        sum += a;
        mp[a]++;
    }
    vector<pair<ll, ll>> vec;
    for (auto c : mp) {
        vec.push_back(c);
    }

    // カードに現れる整数に0~M-1がすべてある(=すべて場に出せる)
    int k = vec.size();
    if (k == m) {
        cout << 0 << endl;
        return;
    }

    // 整数が連続していない(=それ以上場に出せない)ところの index
    int p;
    for (int i = 0; i < k; i++) {
        if (vec[(i + 1) % k].first != (vec[i].first + 1) % m) {
            p = i;
            break;
        }
    }
    for (int i = 0; i < k; i++) {
        int j = (p - i + k) % k;
        if (vec[(j + 1) % k].first != (vec[j].first + 1) % m) {
            // 整数が連続していない(=それ以上場に出せない)ので、全カードの合計からそのカードの分を引いた分が手元に残る
            s[j] = sum - vec[j].first * vec[j].second;
        } else {
            // 次の整数がある(=まだ場に出せる)ので、次の数の手元に残るカードの分からそのカードの分を引いた分が手元に残る
            s[j] = s[(j + 1) % k] - vec[j].first * vec[j].second;
        }
    }
    ll ans = sum;
    for (int i = 0; i < k; i++) {
        ans = min(s[i], ans);
    }
    cout << ans << endl;
}

int main() {
    _main();
}
