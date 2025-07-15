/*
Author: passa
Task #: 1744C
Task Name: Traffic Light
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t, n;
char c;
string s;
vector<int> c_pos;

void read_input() {
    cin >> t;
}

void solve() {
    while (t--) {
        cin >> n >> c;
        cin >> s;

        int start;
        for (int i = 0 ; i < n ; i++) {
            if (s[i] == 'g') start = i; 
        }

        int dist = 0, mx = 0;
        for (int i = start ; i >= 0 ; i--) {
            if (s[i] == 'g') dist = 0;
            else dist++;

            if (s[i] == c) mx = max(mx, dist);
        }

        for (int i = n - 1 ; i > start ; i--) {
            if (s[i] == 'g') dist = 0;
            else dist++;

            if (s[i] == c) mx = max(mx, dist);
        }

        cout << mx << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}