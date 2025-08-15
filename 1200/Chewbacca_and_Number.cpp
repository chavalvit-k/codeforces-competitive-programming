/*
Author: passa
Task #: 514A
Task Name: Chewbaсca and Number
Difficulty: 1200
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string x;
    cin >> x;

    for (int i = 0 ; i < x.length();  i++) {
        int num;
        num = x[i] - '0';
        if (num >= 5 && not (num == 9 && i == 0)) cout << 9 - num;
        else cout << num;
    }

    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}