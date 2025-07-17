/*
Author: passa
Task #: 1359B
Task Name: New Theatre Square
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 110
#define MXM 1010

int t, n, m, x, y;
char rect[MXN][MXM];

void read_input() {
    cin >> t;
}

void solve() {
    while (t--) {
        cin >> n >> m >> x >> y;
        
        for (int i = 0 ; i < n ; i++)
            for (int j = 0 ; j < m ; j++)
                cin >> rect[i][j];

        int cost = 0;
        for (int i = 0 ; i < n ; i++) {
            for (int j = 0 ; j < m ; j++) {
                if (rect[i][j] == '.') {
                    if (j + 1 < m && rect[i][j + 1] == '.' && x * 2 > y) {
                        cost += y;
                        j++;
                    } else {
                        cost += x;
                    }
                }
            }
        }

        cout << cost << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}