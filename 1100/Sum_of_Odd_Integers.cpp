/*
Author: passa
Task #: 1327A
Task Name: Sum of Odd Integers
Difficulty: 1100
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t, n, k;

void solve() {
    cin >> t;
    
    while (t--) {
        cin >> n >> k;

        if (sqrt(n) < k) cout << "NO" << endl;
        else if (n % 2 != k % 2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}