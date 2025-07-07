/*
Author: passa
Task #: 1476A
Task Name: K-divisible Sum
Difficulty: 1000
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t, n, k;

void read_input() {
    cin >> t;
}

void solve() {
    while (t--) {
        cin >> n >> k;
        if (k >= n) {
            cout << (k + n - 1) / n << endl;  
        } else {
            if (n % k == 0) cout << 1 << endl;
            else cout << 2 << endl;
        }
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}