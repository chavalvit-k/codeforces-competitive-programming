/*
Author: passa
Task #: 556A
Task Name: Case of the Zeros and Ones
Difficulty: 900
Tags: greedy
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int zero_cnt = 0;

    for (int i = 0 ; i < n ; i++)
        zero_cnt += (s[i] == '0');

    int mn = min(zero_cnt, n - zero_cnt);

    cout << n - (mn * 2) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
