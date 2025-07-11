/*
Author: passa
Task #: 766B
Task Name: Mahmoud and a Triangle
Difficulty: 1000
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 100010

int n;
bool found;
long long a, b, c;
long long lines[MXN];

void read_input() {
    cin >> n;
    for (int i = 0 ; i < n ; i++) cin >> lines[i];
}

void solve() {
    sort(lines, lines + n);
    
    for (int i = 1 ; i < n - 1 ; i++) {
        a = lines[i - 1];
        b = lines[i];
        c = lines[i + 1];
        if (a + b > c && a + c > b && b + c > a) {found = true; break;}
    }

    cout << (found ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}