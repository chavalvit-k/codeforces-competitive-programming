/*
Author: passa
Task #: 349A
Task Name: Cinema Line
Difficulty: 1100
Solution: Greedy
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n;

void solve() {
    cin >> n;

    vector<int> line(n);
    for (int i = 0 ; i < n ; i++) cin >> line[i];

    int bill_25 = 0, bill_50 = 0, bill_100 = 0;
    bool can = true;
    for (int i = 0 ; i < n ; i++) {
        if (line[i] == 100) {
            if (bill_50 > 0 && bill_25 > 0) {
                bill_100++;
                bill_50--; bill_25--;
            } else if (bill_25 > 2) {
                bill_100++;
                bill_25 -= 3;
            } else {
                can = false;
                break;
            }
        } else if (line[i] == 50) {
            if (bill_25 > 0) {
                bill_50++;
                bill_25--;
            } else {
                can = false;
                break;
            }
        } else if (line[i] == 25) {
            bill_25++;
        }
    }

    cout << (can ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}