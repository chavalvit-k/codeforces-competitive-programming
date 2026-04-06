/*
Author: passa
Task #: 467B
Task Name: Fedor and New Game
Difficulty: 1100
Tags: bitmasks
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> armies;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0 ; i < m ; i++) {
        int x;
        cin >> x;
        armies.push_back(x); 
    }

    int fedor, friends = 0;
    cin >> fedor;

    for (auto army : armies)
        friends += __builtin_popcount(army ^ fedor) <= k;

    cout << friends << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
