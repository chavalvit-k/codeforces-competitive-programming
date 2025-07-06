/*
Author: passa
Task #: 124A
Task Name: The number of positions
Difficulty: 1000
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n, a, b;

void read_input() {
    cin >> n >> a >> b;
}

void solve() {
    cout << min(n - a, b + 1) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}