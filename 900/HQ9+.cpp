/*
Author: passa
Task #: 133A
Task Name: HQ9+ 
Difficulty: 900
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    bool printed = false;
    for (int i = 0 ; i < s.length() ; i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            printed = true;
            break;
        }
    }

    cout << (printed ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}