/*
Author: passa
Task #: 1883B
Task Name: Chemistry
Difficulty: 900
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> freqs;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    for (int i = 0 ; i < n ; i++) {
        freqs[s[i]]++;
    }

    int odd_count = 0;

    for (const auto& [ch, freq] : freqs)
        odd_count += (freq % 2 == 1);

    cout << (odd_count <= k + 1 ? "YES" : "NO") << endl;

    freqs.clear();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}