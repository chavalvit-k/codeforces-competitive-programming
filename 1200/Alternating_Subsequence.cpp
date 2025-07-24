/*
Author: passa
Task #: 1343C
Task Name: Alternating Subsequence
Difficulty: 1200
Solution: Greedy
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];

    int mx = a[0];
    long long ans = 0;
    bool pos = a[0] > 0;

    for (int i = 1 ; i < n ; i++) {
        if (a[i] > 0 == pos) {
            mx = max(mx, a[i]);
        } else {
            ans += mx;
            mx = a[i];
            pos = not pos;
        }
    }

    cout << ans + mx << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while (t--) solve();

    return 0;
}