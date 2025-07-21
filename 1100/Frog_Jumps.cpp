/*
Author: passa
Task #: 1324C
Task Name: Frog Jumps
Difficulty: 1100
Solution: Greedy
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t;
string s;

void solve() {
    cin >> t;

    while (t--) {
        cin >> s;

        vector<int> l_pos;
        l_pos.push_back(0);
        for (int i = 0 ; i < s.length() ; i++) {
            if (s[i] == 'R') l_pos.push_back(i + 1);
        }
        l_pos.push_back(s.length() + 1);

        int mx = 0;   
        for (int i = 1 ; i < l_pos.size() ; i++) {
            mx = max(mx, l_pos[i] - l_pos[i - 1]);
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