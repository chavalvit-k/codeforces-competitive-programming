/*
Author: passa
Task #: 1520D
Task Name: Same Differences
Difficulty: 1200
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a;
    long long ans = 0;
    unordered_map<int, int> m;

    for (int i = 0 ; i < n ; i++) {
        cin >> a;
        a -= i;
        ans += m[a];
        m[a]++;
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}