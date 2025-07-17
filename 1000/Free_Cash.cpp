/*
Author: passa
Task #: 237A
Task Name: Free Cash
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n, h, m;
map<pair<int,int>, int> customers;

void read_input() {
    cin >> n;
}

void solve() {
    int mx = 0;
    for (int i = 0 ; i < n ; i++) {
        cin >> h >> m;
        customers[{h, m}]++;
        mx = max(mx, customers[{h, m}]);
    }

    cout << mx << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}