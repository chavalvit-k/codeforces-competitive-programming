/*
Author: passa
Task #: 580C
Task Name: Kefa and Park
Difficulty: 1500
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 100100

int n,m,u,v,ans,root;
int parent[MXN], dp[MXN];
vector<int> g[MXN];
list<int> s;
bool visited[MXN], is_cat[MXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i=1 ; i<=n ; i++) cin >> is_cat[i];
    for (int i=1 ; i<=n-1 ; i++) {
        cin >> u >> v;
        g[u].push_back(v); g[v].push_back(u);
    }

    s.push_back(1);
    visited[1] = true;
    while (!s.empty()) {
        u = s.front();
        s.pop_front();
        dp[u] = (dp[parent[u]] > m || is_cat[u]) ? dp[parent[u]] + is_cat[u] : 0;
        // u is leaf node and satisfied condition (<= m consecutive vertices with cats)
        if (g[u].size() == 1 && parent[u] != 0 && dp[u] <= m) ans++;
        for (auto v: g[u]) {
            if (visited[v] == false) {
                visited[v] = true;
                parent[v] = u;
                s.push_back(v);
            }  
        }
    }

    cout << ans << endl;

    return 0;
}

/*
Test Case #1:
4 1
1 1 0 0
1 2
1 3
1 4
Output: 2
---------------
Test Case #2:
7 1
1 0 1 1 0 0 0
1 2
1 3
2 4
2 5
3 6
3 7
Output: 2
*/