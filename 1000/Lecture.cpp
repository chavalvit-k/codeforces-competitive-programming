/*
Author: passa
Task #: 499B
Task Name: Lecture
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n, m;
string a, b;
map<string, string> dict;

void read_input() {
    cin >> n >> m;
}

void solve() {
    for (int i = 0 ; i < m ; i++) {
        cin >> a >> b;
        if (a.length() <= b.length()) dict[a] = a;
        else dict[a] = b;
    }

    for (int i = 0 ; i < n ; i++) {
        cin >> a;
        cout << dict[a] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}