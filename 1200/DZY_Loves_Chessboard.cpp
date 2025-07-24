/*
Author: passa
Task #: 445A
Task Name: DZY Loves Chessboard
Difficulty: 1200
Solution: BFS
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    char board[n][m];
    for (int i = 0 ; i < n ; i++)
        for (int j = 0 ; j < m ; j++)
            cin >> board[i][j];
    
    vector<int> g[n * m];
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            for (int k = -1 ; k <= 1 ; k++) {
                for (int l = -1 ; l <= 1 ; l++) {
                    if (i + k < 0 || i + k > n - 1 || j + l < 0 || j + l > m - 1) continue;
                    if ((k == 0 && l == 0) || (k != 0 && l != 0)) continue;
                    if (board[i][j] == '-' || board[i + k][j + l] == '-') continue;
                   
                    int u = (i * m) + j;
                    int v = ((i + k) * m) + (j + l);

                    g[u].push_back(v);
                    g[v].push_back(u);
                }
            }
        }
    }

    bool visited[n * m];
    for (int i = 0 ; i < n * m ; i++) visited[i] = board[i / m][i % m] == '-';

    queue<int> q;
    for (int i = 0 ; i < n * m ; i++) {
        if (visited[i] == true) continue;

        q.push(i);
        visited[i] = true;
        board[i / m][i % m] = 'B';

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (auto v: g[u]) {
                if (visited[v] == false) q.push(v);
                visited[v] = true;
                board[v / m][v % m] = (board[u / m][u % m] == 'B') ? 'W' : 'B';
            }
        }
    }

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}