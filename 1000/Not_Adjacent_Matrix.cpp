/*
Author: passa
Task #: 1520C
Task Name: Not Adjacent Matrix
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;

    if (n == 2) {
        cout << -1 << endl;
        return ;
    }

    int matrix[n][n];
    int num = 1;

    for (int i = 0 ; i < n * n ; i += 2) {
        matrix[i / n][i % n] = num++;
    }
    for (int i = 1 ; i < n * n ; i += 2) {
        matrix[i / n][i % n] = num++;
    }

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}