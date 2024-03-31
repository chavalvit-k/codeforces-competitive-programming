/*
Author: passa
Task #: 545C
Task Name: Woodcutters
Difficulty: 1500
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 100100

int n,ans;
int dp[MXN][3];
vector<int> x(MXN), h(MXN);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i=1 ; i<=n ; i++) cin >> x[i] >> h[i];

    // define dp[i][j] as maximum trees, if only tree number 1 to i exist
    // and decide to let the tree number i stays if j=0, cut to left if j=1 and cut to right if j=2
    dp[1][0] = 0; dp[1][1] = dp[1][2] = 1;
    for (int i=2 ; i<=n ; i++) {
        dp[i][0] = max(dp[i-1][0], max(dp[i-1][1], (x[i-1]+h[i-1] < x[i]) ? dp[i-1][2] : 0));
        dp[i][1] = max((x[i]-h[i] > x[i-1]) ? dp[i-1][0] + 1 : 0,
        max((x[i]-h[i] > x[i-1]) ? dp[i-1][1] + 1 : 0, (x[i]-h[i] > x[i-1]+h[i-1]) ? dp[i-1][2] + 1 : 0));
        dp[i][2] = max(dp[i-1][0] + 1, max(dp[i-1][1] + 1, (x[i-1]+h[i-1] < x[i]) ? dp[i-1][2] + 1 : 0));
    }
    
    ans = max(dp[n][0], max(dp[n][1], dp[n][2]));
    cout << ans << endl;

    return 0;
}

/*
Test Case #1:
5
1 2
2 1
5 10
10 9
19 1
Output: 3
---------------
Test Case #2:
5
1 2
2 1
5 10
10 9
20 1
Output: 4
*/