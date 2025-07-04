/*
Author: passa
Task #: 379A
Task Name: New Year Candles
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int a, b, hours, dead;

void read_input() {
    cin >> a >> b;
}

void solve() {
    while (a != 0) {
        a -= 1;
        dead += 1;
        hours += 1;

        if (dead == b) {
            dead = 0;
            a += 1;
        }
    }

    cout << hours << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}