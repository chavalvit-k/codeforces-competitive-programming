/*
Author: passa
Task #: 405A
Task Name: Gravity Flip
Difficulty: 900
Solution: Sorting
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n;

void solve() {
    cin >> n;

    vector<int> a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];

    sort(a.begin(), a.end());

    for (int i = 0 ; i < n ; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}