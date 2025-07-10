/*
Author: passa
Task #: 1366A
Task Name: Shovels and Swords
Difficulty: 1100
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t, a, b;

void read_input() {
    cin >> t;
}

void solve() {
    while (t--) {
        cin >> a >> b;
        cout << min((a + b) / 3, min(a, b)) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}