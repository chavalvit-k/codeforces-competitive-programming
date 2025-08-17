/*
Author: passa
Task #: 977C
Task Name: Less or Equal
Difficulty: 1200
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];

    sort(a.begin(), a.end());

    if (k == 0) {
        if (a[0] > 1) cout << 1 << endl;
        else cout << -1 << endl;       
    }
    else if (k == n || a[k - 1] != a[k]) cout << a[k - 1] << endl;
    else cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}