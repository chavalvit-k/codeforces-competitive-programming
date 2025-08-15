/*
Author: passa
Task #: 459A
Task Name: Pashmak and Garden
Difficulty: 1200
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int x3, y3, x4, y4;
    if (x1 == x2) {
        int width = abs(y1 - y2);
        cout << x1 + width << " " << y1 << " " << x2 + width << " " << y2 << endl;
    } else if (y1 == y2) {
        int height = abs(x1 - x2);
        cout << x1 << " " << y1 + height << " " << x2 << " " << y2 + height << endl;
    } else if (abs(x1 - x2) == abs(y1 - y2)){
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}