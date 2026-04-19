/*
Author: passa
Task #: 1373B
Task Name: 01 Game
Difficulty: 900
Tags: game
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.length(), zero_cnt = 0;

    for (int i = 0 ; i < n ; i++)
        zero_cnt += (s[i] == '0');

    int moves = min(zero_cnt, n - zero_cnt);

    cout << (moves % 2 == 1 ? "DA" : "NET") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
