/*
Author: passa
Task #: 1374C
Task Name: Move Brackets
Difficulty: 1000
Solution: Stack
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t, n, moves;
char bracket, top;
stack<char> s;

void read_input() {
    cin >> t;
}

void solve() {
    while (t--) {
        cin >> n;

        for (int i = 0 ; i< n ; i++) {
            cin >> bracket;

            if (s.empty()) s.push(bracket);
            else {
                top = s.top();
                if (top == bracket) s.push(bracket);
                else if (top == '(' && bracket == ')') s.pop();
                else {
                    s.push(bracket);
                }
            }
        }

        moves = s.size() / 2;
        cout << moves << endl;

        while (!s.empty()) s.pop();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}