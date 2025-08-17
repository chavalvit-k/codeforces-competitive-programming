/*
Author: passa
Task #: 1363A
Task Name: Odd Selection
Difficulty: 1200
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    int a, odds = 0, evens = 0;
    for (int i = 0 ; i < n ; i++) {
        cin >> a;
        if (a % 2 == 0) evens++;
        else odds++;
    }

    bool can = false;
    for (int i = 1 ; i <= min(odds, x) ; i += 2) {
        if (evens >= x - i) can = true; 
    }

    cout << (can ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}