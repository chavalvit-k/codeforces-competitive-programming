/*
Author: passa 
Task #: 1857C
Task Name: Assembly via Minimums
Difficulty: 1200
Solution: Greedy
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

void solve() {
    int n;
    cin >> n;

    int b_size = n * (n - 1) / 2;
    map<int, int> m;
    for (int i = 0 ; i < b_size ; i++) {
        int b;
        cin >> b;
        m[b]++;
    }

    vector<pair<int, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
        return a.first < b.first;
    });

    for (int i = 0, j = 0 ; i < v.size() ; i++) {
        while (v[i].second > 0) {
            v[i].second -= (n - j - 1);
            cout << v[i].first << " ";
            j++;
        }
    }

    cout << INF << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}