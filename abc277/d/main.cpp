#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n, m;
    cin >> n >> m;
    map<int, int> card;
    ll sum = 0;
    rep(i, 0, n) {
        int a;
        cin >> a;
        sum += a;
        card[a]++;
    }
    // for (auto c : card) {
    //     cout << c.first << " " << c.second << endl;
    // }
    ll max_num = 0;
    ll tmp = 0;
    int tmp_index = (*card.begin()).first;
    for (auto c : card) {
        if (c.first != tmp_index) {
            max_num = max(max_num, tmp);
            tmp = c.first * c.second;
            tmp_index = c.first + 1;
            continue;
        }
        tmp += c.first * c.second;
        max_num = max(max_num, tmp);
        tmp_index++;
        if (tmp_index != m - 1) continue;
        tmp_index = 0;
        while (card[tmp_index] != 0) {
            tmp += card[tmp_index] * tmp_index;
            tmp_index++;
        }
        max_num = max(max_num, tmp);
    }
    cout << sum - max_num << endl;
}

int main() {
    _main();
}
