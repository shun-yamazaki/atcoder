#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    string S, T;
    cin >> S >> T;
    if (S.length() < T.length()) {
        cout << "No" << endl;
        return;
    }
    for (int i = 0; i <= S.length() - T.length(); i++) {
        if (S.substr(i, T.length()) == T) {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

int main() {
    _main();
}
