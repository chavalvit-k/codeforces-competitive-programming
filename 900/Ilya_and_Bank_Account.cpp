/*
Author: passa
Task #: 313A
Task Name: Ilya and Bank Account
Difficulty: 900
Tags: maths
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n;
    cin >> n;

    if (n[0] != '-') {
        cout << n << endl;
        return ;
    }

    if (n.length() == 3 && n[2] == '0') {
        cout << 0 << endl;
        return ;
    }

    for (int i = 0 ; i < n.length() - 2 ; i++)
        cout << n[i];

    int last = n[n.length() - 1] - '0';
    int before_last = n[n.length() - 2] - '0';

    cout << min(last, before_last) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
