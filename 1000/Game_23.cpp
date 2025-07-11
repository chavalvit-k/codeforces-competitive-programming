/*
Author: passa
Task #: 1141A
Task Name: Game 23
Difficulty: 1000
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

long n, m;
int moves;

void read_input() {
    cin >> n >> m;
}

void solve() {
    if (m % n != 0) {
        cout << -1 << endl;
        return ;
    }

    m /= n;
    while (m % 2 == 0) {m /= 2L; moves++;}
    while (m % 3 == 0) {m /= 3L; moves++;}
    
    cout << (m == 1 ? moves : -1) << endl;        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}