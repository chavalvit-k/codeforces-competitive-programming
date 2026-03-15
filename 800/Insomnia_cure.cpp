/*
Author: passa
Task #: 148A
Task Name: Insomnia cure
Difficulty: 800
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int damaged_count = 0;

    for (int i = 1 ; i <= d ; i++)
        damaged_count += (i % k == 0) || (i % l == 0) || (i % m == 0) || (i % n == 0);

    cout << damaged_count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}