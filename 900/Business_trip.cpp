/*
Author: passa
Task #: 149A
Task Name: Business trip
Difficulty: 900
Solution: Greedy
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    cin >> k;

    vector<int> a(12);
    for (int i = 0 ; i < 12 ; i++) cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());

    int ans = 0, grow = 0;
    
    for (int i = 0 ; i < 12 && grow < k ; i++) {
        grow += a[i];
        ans++;   
    }

    cout << (grow >= k ? ans : -1) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}