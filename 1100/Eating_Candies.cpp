/*
Author: passa
Task #: 1669F
Task Name: Eating Candies
Difficulty: 1100
Tasks: greedy, two pointers
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> weights;

void solve() {
    int n;
    cin >> n;

    for (int i = 0 ; i < n ; i++) {
        int w;
        cin >> w;
        weights.push_back(w);
    }

    int l = 0, r = n - 1, ans = 0, sum_l = 0, sum_r = 0;

    while (l <= r) {
        if (sum_l < sum_r) sum_l += weights[l++];
        else sum_r += weights[r--];

        if (sum_l == sum_r) ans = l + n - r - 1;
    }

    cout << ans << endl;

    weights.clear();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
