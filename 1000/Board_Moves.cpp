/*
Author: passa
Task #: 1353C
Task Name: Board Moves
Difficulty: 1000
Solution: DP
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 500010

int t, n;
long long new_moves, k, dp[MXN];

void read_input() {
    cin >> t;
}

void solve() {
    for (int i = 3 ; i <= MXN ; i = i + 2) {
        k = (i - 1) / 2;
        new_moves = k * k * 8LL;
        dp[i] = new_moves + dp[i - 2];
    }

    while (t--) {
        cin >> n;
        cout << dp[n] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}