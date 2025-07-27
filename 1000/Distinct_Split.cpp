/*
Author: passa
Task #: 1791D
Task Name: Distinct Split
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> f1(n, 0);
    vector<bool> found(26, false);
    f1[0] = 1;
    found[s[0] - 'a'] = true;

    for (int i = 1 ; i < n ; i++) {
        if (found[s[i] - 'a'] == false) {
            f1[i] = f1[i - 1] + 1;
            found[s[i] - 'a'] = true;
        } else {
            f1[i] = f1[i - 1];
        }
    }

    vector<int> f2(n, 0);
    fill(found.begin(), found.end(), false);
    f2[n - 1] = 1;
    found[s[n - 1] - 'a'] = true;

    for (int i = n - 2 ; i >= 0 ; i--) {
        if (found[s[i] - 'a'] == false) {
            f2[i] = f2[i + 1] + 1;
            found[s[i] - 'a'] = true; 
        } else {
            f2[i] = f2[i + 1];
        }
    }

    int mx = 0;
    for (int i = 0 ; i < n - 1 ; i++) {
        mx = max(mx, f1[i] + f2[i + 1]);
    }

    cout << mx << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}