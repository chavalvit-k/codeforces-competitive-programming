/*
Author: passa
Task #: 1914D
Task Name: Three Activities
Difficulty: 1200
Solution: Greedy
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t, n;

void solve() {
    cin >> t;
    
    while (t--) {
        cin >> n;

        int a, b, c;
        vector<pair<int,int>> aa(n), bb(n), cc(n);
        for (int i = 0 ; i < n ; i++) {cin >> a; aa[i] = {a, i};};
        for (int i = 0 ; i < n ; i++) {cin >> b; bb[i] = {b, i};};
        for (int i = 0 ; i < n ; i++) {cin >> c; cc[i] = {c, i};};

        sort(aa.begin(), aa.begin() + n, [](auto &a, auto &b) {
            return a.first > b.first;
        });
        sort(bb.begin(), bb.begin() + n, [](auto &a, auto &b) {
            return a.first > b.first;
        });
        sort(cc.begin(), cc.begin() + n, [](auto &a, auto &b) {
            return a.first > b.first;
        });

        int mx_a, mx_b, mx_c, sel_a, sel_b, sel_c, mx = 0;

        for (int i = 0 ; i < 3 ; i++) {
            sel_a = aa[i].second;
            mx_a = aa[i].first;

            for (int j = 0 ; j < 3 ; j++) {
                sel_b = bb[j].second;
                if (sel_b == sel_a) continue;
                mx_b = bb[j].first;

                for (int k = 0 ; k < 3 ; k++) {
                    sel_c = cc[k].second;
                    if (sel_c == sel_a || sel_c == sel_b) continue;
                    mx_c = cc[k].first;

                    mx = max(mx, mx_a + mx_b + mx_c);
                }           
            }
        }

        cout << mx << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}