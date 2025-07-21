/*
Author: passa
Task #: 1213B
Task Name: Bad Prices
Difficulty: 1100
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t, n;

void solve() {
    cin >> t;

    while (t--) {
        cin >> n;

        vector<int> a(n);
        for (int i = 0 ; i < n ; i++) cin >> a[i];

        int mn = a[n - 1], ans = 0;
        for (int i = n - 2 ; i >= 0 ; i--) {
            if (a[i] > mn) ans++;
            else mn = a[i];
        }

        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}