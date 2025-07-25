/* 
Author: passa
Task #: 34B
Task Name: Sale
Difficulty: 900
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int ans = 0;
    for (int i = 0 ; i < m ; i++) {
        ans += (a[i] < 0) ? -a[i] : 0;
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}