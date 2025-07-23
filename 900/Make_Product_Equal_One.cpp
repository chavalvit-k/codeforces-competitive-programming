/*
Author: passa
Task #: 1206B
Task Name: Make Product Equal One
Difficulty: 900
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n;

void solve() {
    cin >> n;

    vector<int> a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];

    int neg = 0;
    long long cost = 0;
    bool found_0 = false;
    for (int i = 0 ; i < n ; i++) {
        cost += min(abs(a[i] + 1), abs(a[i] - 1));
        if (a[i] < 0) neg++;
        else if (a[i] == 0) found_0 = true;
    }

    if (neg % 2 != 0 && found_0 == false) cost += 2;

    cout << cost << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}