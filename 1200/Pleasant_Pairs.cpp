/*
Author: passa
Task #: 1541B
Task Name: Pleasant Pairs
Difficulty: 1200
Tags: math, number theory
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

const int MXN = 2e5 + 10;
const int MXA = MXN * 2;

int pos[MXA];

void solve() {
    int n;
    cin >> n;

    int mx = 0;

    for (int i = 1 ; i <= n ; i++) {
        int a;
        cin >> a;
        pos[a] = i;
        mx = max(mx, a);
    }

    int ans = 0;

    for (int x = 1 ; x <= mx ; x++) {
        if (!pos[x]) continue;
        for (int y = 1 ; y <= (2 * n) / x ; y++) {
            if (!pos[y]) continue;
            ans += (pos[x] < pos[y] && (x * y == pos[x] + pos[y]));
        }
    }

    cout << ans << endl;

    memset(pos, 0, sizeof(pos));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
