#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int N;
    string S;
    cin >> N;
    cin >> S;

    bool inner = false;
    rep(i, 0, N) {
        if (S[i] == '"') inner = !inner;
        if (S[i] == ',' && !inner) S[i] = '.';
    }
    cout << S << endl;
}

int main() {
    _main();
}
