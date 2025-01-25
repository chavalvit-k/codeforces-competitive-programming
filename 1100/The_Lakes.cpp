/*
Author: passa
Task #: 1829E
Task Name: The Lakes
Difficulty: 1100
Solution: Connected Component with DFS
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 1010
#define MXM 1010

int t,n,m,x,y,xx,yy,ans,tvol;
int vol[MXN][MXM],visited[MXN][MXM];
stack<pair<int,int>> s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n >> m;
        for (int i = 1 ; i <= n ; i++) 
            for (int j = 1 ; j <= m ; j++) cin >> vol[i][j];

        for (int i = 1 ; i <= n ; i++) {
            for (int j = 1 ; j <= m ; j++) {
                if (visited[i][j] == true || !vol[i][j]) continue;
                s.push({i, j});

                while (!s.empty()) {
                    x = s.top().second; y = s.top().first;
                    tvol += vol[y][x];
                    visited[y][x] = true;
                    s.pop();

                    for (int ii = -1 ; ii <= 1 ; ii++) {
                        for (int jj = -1 ; jj <= 1 ; jj++) {
                            if (abs(ii) == abs(jj)) continue;
                            xx = x + ii; yy = y + jj;
                            if (yy >= 1 && yy <= n && xx >= 1 && xx <= m && vol[yy][xx] && !visited[yy][xx]) {
                                visited[yy][xx] = true;
                                s.push({yy, xx});
                            }
                        }
                    }
                }
                
                ans = max(ans, tvol);
                tvol = 0;
            }
        } 
        
        cout << ans << endl;

        ans = 0;
        for (int i = 1  ; i <= n ; i++)
            for (int j = 1 ; j <= m ; j++) visited[i][j] = false;
    }

    return 0;
}