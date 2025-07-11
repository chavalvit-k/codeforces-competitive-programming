/*
Author: passa
Task #: 139A
Task Name: Petr and Book
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n, day;
int pages[7];

void read_input() {
    cin >> n;
    for (int i = 0 ; i < 7 ; i++) cin >> pages[i];
}

void solve() {
    day = 0;
    while (n > 0) {
        day = (day % 7) + 1;
        n -= pages[day - 1];
    }

    cout << day << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}