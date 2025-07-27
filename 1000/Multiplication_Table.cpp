/*
Author: passa
Task #: 577A
Task Name: Multiplication Table
Difficulty: 1000
Solution: Adhoc 
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    long long ans = 0;
    for (int i = 0 ; i < n ; i++) {
        long long start = i + 1;
        long long end = n * start;
        if (x >= start && x <= end && x % start == 0) ans++;
    }
        
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}