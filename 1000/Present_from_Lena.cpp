/*
Author: passa
Task #: 118B
Task Name: Present from Lena
Difficulty: 1000
Solution: Loop Printing
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n;

void read_input() {
    cin >> n;
}

void solve() {
    for (int i = 0 ; i < n ; i++) {
        for (int j = n ; j > i ; j--) cout << "  ";
        for (int j = 0 ; j < i ; j++) {
            cout << j << " ";
        }
        for (int j = i ; j >= 0 ; j--) {
            cout << j;
            if (j > 0) cout << " ";
        }
        cout << endl;
    }

    for (int i = 0 ; i < n ; i++) {cout << i << " ";}
    for (int i = n ; i >= 0 ; i--) {
        cout << i;
        if (i > 0) cout << " ";
    }
    cout << endl;

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < i + 1 ; j++) cout << "  ";
        for (int j = 0 ; j < n - i - 1 ; j++) {
            cout << j << " ";
        }
        for (int j = n - i - 1 ; j >= 0 ; j--) {
            cout << j;
            if (j > 0) cout << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}