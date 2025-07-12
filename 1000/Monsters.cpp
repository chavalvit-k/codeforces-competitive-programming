/*
Author: passa
Task #: 1849B
Task Name: Monsters
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 300010
int t, n;
long long k, a;
vector<pair<long long, int>> hp;

void read_input() {
    cin >> t;
}

void solve() {
    while (t--) {
        cin >> n >> k;

        for (int i = 1 ; i <= n ; i++) {
            cin >> a;
            if (a % k != 0) a %= k;
            else a = k;
            hp.push_back({a, i});
        }

        sort(hp.begin(), hp.end(), [](auto &a, auto &b) {
            if (a.first != b.first) return a.first > b.first;
            else return a.second < b.second;
        });

        for (auto monster: hp) cout << monster.second << " ";
        cout << endl;

        hp.clear();
        vector<pair<long long, int>>().swap(hp);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}