#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

void _main() {
    int n;
    string s;
    cin >> n >> s;
    cout << regex_replace(s, regex("na"), "nya") << endl;
}

int main() {
    _main();
}
