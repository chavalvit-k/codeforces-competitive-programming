/*
Author: passa
Task #: 337A
Task Name: Puzzles
Difficulty: 900
Solution: Sliding Window
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX 

int n, m;

void solve() {
    cin >> n >> m;

    vector<int> f(m);
    for (int i = 0 ; i < m ; i++) cin >> f[i];

    sort(f.begin(), f.end());

    int l = 0, r = n - 1, mn = INF;
    while (r < m) {
        mn = min(mn, f[r] - f[l]);
        l++; r++;
    }

    cout << mn << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}