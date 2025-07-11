/*
Author: passa
Task #: 268B
Task Name: Buttons
Difficulty: 1000
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n, i, j, moves;

void read_input() {
    cin >> n;
}

void solve() {
    i = 1; j = n;
    while (i <= n) {
        moves += (i * j) - (i - 1);
        i++; j--;
    }

    cout << moves << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}