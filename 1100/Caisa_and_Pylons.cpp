/*
Author: passa
Task #: 463B
Task Name: Caisa and Pylons
Difficulty: 1100
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX

int n;

void solve() {
    cin >> n;

    vector<int> h(n);
    for (int i = 0 ; i < n ; i++) cin >> h[i];

    int mn = INF, score = 0;
    for (int i = 0 ; i < n - 1; i++) {
        score += h[i] - h[i + 1];
        mn = min(mn, score);
    }

    cout << h[0] + max(0, -mn) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}