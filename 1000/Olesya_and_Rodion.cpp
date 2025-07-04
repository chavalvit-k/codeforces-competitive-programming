/*
Author: passa
Task #: 584A
Task Name: Olesya and Rodion
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n, t;
char digit;

void read_input() {
    cin >> n >> t;
}

void solve() {
    if (n == 1 && t == 10) {
        cout << "-1" << endl;
    } else if (n > 1 && t == 10) {
        cout << "1" + string(n - 1, '0') << endl;
    } else {
        digit = t + '0'; 
        cout << string(n, digit) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}