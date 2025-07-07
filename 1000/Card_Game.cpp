/*
Author: passa
Task #: 1999B
Task Name: Card Game
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t, a1, a2, b1, b2, wins;

void read_input() {
    cin >> t;
}

void solve() {
    while (t--) {
        cin >> a1 >> a2 >> b1 >> b2;
        
        wins = 0;
        if ((a1 > b1 && a2 >= b2) || (a1 >= b1 && a2 > b2)) wins++;
        if ((a1 > b2 && a2 >= b1) || (a1 >= b2 && a2 > b1)) wins++;

        cout << wins * 2 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}