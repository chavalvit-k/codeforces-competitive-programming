/*
Author: passa
Task #: 550A
Task Name: Two Substrings
Difficulty: 1500
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

string s;
bool is_satisfy(string sub_str_1, string sub_str_2); 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s;

    bool ans = is_satisfy("AB", "BA") || is_satisfy("BA", "AB");

    cout << (ans ? "YES" : "NO") << endl;

    return 0;
}

bool is_satisfy(string sub_str_1, string sub_str_2) {
    int cur = 0;
    int pos = 0;
    bool ans = false;

    for (int i = 0 ; i < s.size() ; i++) {
        if (cur == 0) {
            if (s[i] == sub_str_1[pos]) pos++;
            else {
                pos = 0;
                if (s[i] == sub_str_1[pos]) pos++;
            }
            if (pos == 2) {
                cur++;
                pos = 0;
            }
        } else if (cur == 1) {
            if (s[i] == sub_str_2[pos]) pos++;
            else {
                pos = 0;
                if (s[i] == sub_str_2[pos]) pos++;
            }
            if (pos == 2) {
                ans = true;
                break;
            }
        }
    }

    return ans;
}