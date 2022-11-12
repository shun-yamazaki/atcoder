#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for (int i = (int)k; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

vector<char> mark{'H', 'D', 'C', 'S'};
vector<char> num{'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

void _main() {
    int n;
    cin >> n;
    set<string> cards;
    rep(i, 1, n + 1) {
        string card;
        cin >> card;
        if (find(all(mark), card[0]) == mark.end() || find(all(num), card[1]) == num.end()) {
            cout << "No" << endl;
            return;
        }
        cards.insert(card);
    }
    if (cards.size() == n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main() {
    _main();
}
