/*
Author: passa
Task #: 318A
Task Name: Even Odds
Difficulty: 900
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    long long ans, last_odd_pos = (n + 1) / 2;

    if (k <= last_odd_pos) ans = 2 * k - 1;
    else ans = 2 * (k - last_odd_pos);

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}