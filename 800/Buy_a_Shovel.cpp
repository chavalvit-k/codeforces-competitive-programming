/*
Author: passa
Task #: 732A
Task Name: Buy a Shovel
Difficulty: 800
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, r;
    cin >> k >> r;

    int answer = 0;

    for (int i = 1 ; i <= 10 ; i++) {
        int cost = k * i;
        answer = i;

        if (cost % 10 == 0 || (cost - r) % 10 == 0) break;
    }

    cout << answer << endl; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}