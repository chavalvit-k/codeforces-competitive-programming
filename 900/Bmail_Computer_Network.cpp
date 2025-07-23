/*
Author: passa
Task #: 1057A
Task Name: Bmail Computer Network
Difficulty: 900
Solution: Tree Traversal
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n;

void solve() {
    cin >> n;

    int v;
    vector<int> t(n + 1);
    t[0] = - 1; t[1] = 0;
    for (int u = 2 ; u <= n ; u++) {
        cin >> v;
        t[u] = v;
    }

    int u = n;
    stack<int> path;
    while (u != 0) {
        path.push(u);
        u = t[u];
    }

    while (!path.empty()) {
        cout << path.top() << " ";
        path.pop();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}