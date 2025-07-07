/*
Author: passa
Task #: 450A
Task Name: Jzzhu and Children
Difficulty: 1000
Solution: Stack
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n, m, a, idx, candies;
queue<pair<int, int>> q;

void read_input() {
    cin >> n >> m;
}

void solve() {
    for (int i = 1 ; i <= n ; i++) {
        cin >> a;
        q.push({i, a});
    }

    while (q.size() > 1) {
        idx = q.front().first;
        candies = q.front().second;
        candies -= m;

        q.pop();
 
        if (candies > 0) q.push({idx, candies});
    }

    cout << q.front().first << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}