/*
Author: passa
Task #: 1742E
Task Name: Scuza
Difficulty: 1200
Solution: Binary Search (Upper Bound)
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n), k(q);
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    for (int i = 0 ; i < q ; i++) cin >> k[i];

    vector<long long> h_ps(n);
    h_ps[0] = a[0];
    for (int i = 1 ; i < n ; i++) h_ps[i] = h_ps[i - 1] + a[i];

    vector<int> h_norm(n);
    h_norm[0] = a[0];
    for (int i = 1 ; i < n ; i++) h_norm[i] = max(h_norm[i - 1], a[i]);

    for (int i = 0 ; i < q ; i++) {
        auto it = upper_bound(h_norm.begin(), h_norm.end(), k[i]);
        int index = it - h_norm.begin() - 1;
        cout << (index >= 0 ? h_ps[index] : 0) << " ";
    }
    
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}