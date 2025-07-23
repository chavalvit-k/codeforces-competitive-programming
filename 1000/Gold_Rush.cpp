/*
Author: passa
Task #: 1829D
Task Name: Gold Rush
Difficulty: 1000
Solution: Recursive
Language: C++ 
*/

/*
Since we divided by 3 -> depth = log₃n
Each node creates 2 more children
Then we will have O(2^log₃n) = O(n^log₃2) ~ O(n^0.63)
*/

#include <bits/stdc++.h>
using namespace std;

int t;

int split(int a, int m) {
    if (a == m) return 1;
    if (a % 3 != 0) return 0;
    return split(a / 3 * 2, m) + split(a / 3, m);
}

void solve() {
    int n, m;
    cin >> n >> m;

    bool can = split(n, m);

    cout << (can ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while (t--) solve();

    return 0;
}