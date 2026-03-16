/*
Author: passa
Task #: 510A
Task Name: Fox And Snake
Difficulty: 800
Solution: Drawing
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 0 ; i < n ; i++) {
        if (i % 2 == 0) {
            for (int j = 0 ; j < m ; j++)
                cout << "#";
        } else if ((i - 1) % 4 == 0) {
            for (int j = 0 ; j < m - 1 ; j++)
                cout << ".";
            cout << "#";
        } else if ((i + 1) % 4 == 0) {
            cout << "#";
            for (int j = 0 ; j < m - 1 ; j++)
                cout << ".";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
