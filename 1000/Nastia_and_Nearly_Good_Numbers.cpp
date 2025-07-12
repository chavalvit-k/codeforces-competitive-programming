/*
Author: passa
Task #: 1521A
Task Name: Nastia and Nearly Good Numbers
Difficulty: 1000
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t;
long long a, b;

void read_input() {
    cin >> t;
}

void solve() {
    while (t--) {
        cin >> a >> b;

        if (b == 1) {cout << "NO" << endl; continue;}

        cout << "YES" << endl;
        cout << a << " " << a * b << " " << a * (b + 1) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}