/*
Author: passa
Task #: 1840C
Task Name: Ski Resort
Difficulty: 1000
Solution: math, combinatorics
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

const int MXN = 2e5 + 10;

vector<int> temps;

void solve() {
    int n, k, q;
    cin >> n >> k >> q;

    for (int i = 0 ; i < n ; i++) {
        int temp;
        cin >> temp;
        temps.push_back(temp);
    }

    int l = 0;
    long long ans = 0;

    for (int i = 0 ; i < n ; i++) {
        if (temps[i] <= q) l++;
        else {
            if (l >= k) ans += (l - k + 2) * (l - k + 1) / 2;
            l = 0;
        }
    }

    if (l >= k) ans += (l - k + 2) * (l - k + 1) / 2;

    cout << ans << endl;

    temps.clear();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
