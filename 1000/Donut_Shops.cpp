/*
Author: passa
Task #: 1373A
Task Name: Donut Shops
Difficulty: 1000
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t;
long long a, b, c;

void read_input() {
    cin >> t;
}

void solve() {
    while (t--) {
        cin >> a >> b >> c;

        if (c <= a) cout << -1 << " ";
        else cout << 1 << " ";

        if (c >= a * b) cout << -1 << endl;
        else cout << b << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}