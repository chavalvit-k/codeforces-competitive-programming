/*
Author: passa
Task #: 208A
Task Name: Dupstep
Difficulty: 900
Tags: strings
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

vector<string> splits;

void solve() {
    string s;
    cin >> s;

    int i = 0;
    string word = "";

    while (i < s.length()) {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            if (word.length() > 0) splits.push_back(word);
            word = "";
            i += 3;
        } else {
            word += s[i];
            i += 1;
        }
    }

    if (word.length() > 0) splits.push_back(word);

    for (auto word : splits) {
        cout << word << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
