/*
Author: passa
Task #: 115A
Task Name: Party
Difficulty: 900
Solution: Trees
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

const int MXN = 2010;

int managers[MXN];

void solve() {
    int n;
    cin >> n;

    for (int i = 1 ; i <= n ; i++) {
        int p;
        cin >> p;
        managers[i] = p;
    }

    int max_depth = 0;

    for (int i = 1 ; i <= n ; i++) {
        int current = i, depth = 0;

        while (current != -1) {
            depth++;
            current = managers[current];
        }

        max_depth = max(max_depth, depth);
    }

    cout << max_depth << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
