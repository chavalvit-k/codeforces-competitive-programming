/*
Author: passa
Task #: 476A
Task Name: Dreamoon and Stairs
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n, m, mn, mx, moves;
bool found = false;

void read_input() {
    cin >> n >> m;
}

void solve() {
    mn = (n + 2 - 1) / 2;
    mx = n;

    moves = mn;
    while (moves <= mx) {
        if (moves % m == 0) {
            found = true;
            break;
        }
        moves ++;
    }

    cout << (found ? moves : -1) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}