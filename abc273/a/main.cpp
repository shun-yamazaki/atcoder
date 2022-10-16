#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int f(int n) {
    if (n == 0)
        return 1;
    else
        return n * f(n - 1);
}

void _main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
}

int main() {
    _main();
}
