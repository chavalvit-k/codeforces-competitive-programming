/*
Author: passa
Task #: 474A
Task Name: Keyboard
Difficulty: 900
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    char move;
    string s;
    cin >> move >> s;

    string chars = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    for (int i = 0 ; i < s.length() ; i++) {
        int index = chars.find(s[i]);
        
        int new_index;
        if (move == 'L') new_index = (index + 1 < chars.length()) ? index + 1 : 0;
        else if (move == 'R') new_index = (index - 1 >= 0) ? index - 1 : chars.length() - 1;

        cout << chars[new_index];
    }
    
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}