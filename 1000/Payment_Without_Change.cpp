/*
Author: passa
Task #: 1256A
Task Name: Payment Without Change
Difficulty: 1000
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int q, a, b, n, s, x;

void read_input() {
    cin >> q;
}

void solve() {
    while (q--) {
        cin >> a >> b >> n >> s;

        x = (a - (s / n) >= 0) ? (s / n) : a;

        if (s - (n * x) <= b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}