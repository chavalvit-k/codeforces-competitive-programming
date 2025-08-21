/*
Author: passa
Task #: 1873E
Task Name: Building an Aquarium
Difficulty: 1100
Solution: Binary Search
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];

    int l = 1, r = INF, h;
    long long water;
    while (l <= r) {
        h = l + (r - l) / 2;
        water = 0;
        for (int i = 0 ; i < n ; i++) {
            water += max(h - a[i], 0);
        }
        if (water > x) {
            r = h - 1;
        } else {
            l = h + 1;
        }
    }

    cout << (water <= x ? h : h - 1) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}