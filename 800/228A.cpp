/*
Author: passa
Task #: 228A
Task Name: Is your horseshoe on the other hoof?
Difficulty: 800
Tags: implementation
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

set<int> s;

void solve() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);

    cout << 4 - s.size() << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
