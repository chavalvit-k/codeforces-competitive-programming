/*
Author: passa
Task #: 1020B
Task Name: Badge
Difficulty: 1000
Solution: DFS
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 1010

int n,p,u,v;
int visited[MXN],g[MXN];
stack<int> s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int u = 1 ; u <= n ; u++) {
        cin >> p;
        g[u] = p;
    }

    for (int a = 1 ; a <= n ; a++) {
        s.push(a);
        while (!s.empty()) {
            u = s.top();
            visited[u] = true;
            s.pop();
            v = g[u];
            if (visited[v] == true) {
                cout << v << " ";
                while (!s.empty()) s.pop();
                memset(visited, 0, sizeof(visited));
                break;
            } else {
                s.push(v);
            }
        }
    }

    return 0;
}