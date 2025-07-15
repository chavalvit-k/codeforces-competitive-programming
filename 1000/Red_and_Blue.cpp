/*
Author: passa
Task #: 1469B
Task Name: Red and Blue
Difficulty: 1000
Solution: Greedy
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 110
#define MXM 110
#define MXA MXN + MXM

int t, n, m;
int r[MXN], b[MXM], sum_r[MXN], sum_b[MXM];

void read_input() {
    cin >> t;
}

void solve() {
    while (t--) {
        cin >> n;
        for (int i = 0 ; i < n ; i++) cin >> r[i];
        cin >> m;
        for (int i = 0 ; i < m ; i++) cin >> b[i];
        
        int mx_r = max(0, r[0]);
        sum_r[0] = r[0];
        for (int i = 1 ; i < n ; i++) {
            sum_r[i] = sum_r[i - 1] + r[i];
            mx_r = max(mx_r, sum_r[i]);
        }
            
        int mx_b = max(0, b[0]);
        sum_b[0] = b[0];
        for (int i = 1; i < m ; i++) {
            sum_b[i] = sum_b[i - 1] + b[i];
            mx_b = max(mx_b, sum_b[i]);
        }
        
        cout << mx_r + mx_b << endl;

        memset(r, 0, sizeof(r));
        memset(b, 0, sizeof(b));
        memset(sum_r, 0, sizeof(sum_r));
        memset(sum_b, 0, sizeof(sum_b));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}