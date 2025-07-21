/*
Author: passa
Task #: 1914C
Task Name: Quests
Difficulty: 1100
Solution: Greedy
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t, n, k;

void solve() {
    cin >> t;

    while (t--) {
        cin >> n >> k;

        vector<int> a(n + 1), b(n + 1);
        for (int i = 1 ; i <= n ; i++) cin >> a[i];
        for (int i = 1 ; i <= n ; i++) cin >> b[i];

        int sum_a[n], max_b[n];
        sum_a[1] = a[1]; max_b[1] = b[1];
        for (int i = 2 ; i <= n ; i++) sum_a[i] = sum_a[i - 1] + a[i];
        for (int i = 2 ; i <= n ; i++) max_b[i] = max(max_b[i - 1], b[i]);
        
        int mx = 0;
        for (int i = 1 ; i <= n && k >= i ; i++) {
            mx = max(mx, sum_a[i] + max_b[i] * (k - i));
        }

        cout << mx << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}