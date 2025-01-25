/*
Author: passa
Task #: 500A
Task Name: New Year Transportation
Difficulty: 1000
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 30100

int n,t,u,v;
bool ans;
int a[MXN],visited[MXN];
int g[MXN];
stack<int> s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> t;

    for (int i = 1 ; i <= n - 1 ; i++) cin >> a[i];

    for (int u = 1 ; u <= n - 1 ; u++) {
        g[u] = u + a[u];
    }

    s.push(1);
    while (!s.empty()) {
        u = s.top();
        if (u == t) {
            ans = true;
            break;
        }
        visited[u] = true;
        s.pop();
        v = g[u];
        if (!visited[v]) s.push(v);
    }

    cout << (ans ? "YES" : "NO") << endl;

    return 0;
}