/*
Author: passa
Task #: 1418C
Task Name: Mortal Kombat Tower
Difficulty: 1500
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 200100
#define INF 2e9

int t,n,ans;
int dp[MXN][2];
vector<int> a(MXN), ans_arr;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    
    while (t--) {
        cin >> n;
        for (int i=1 ; i<=n ; i++) cin >> a[i];

        // define dp[i][j] as minimum stent points, if only monster number 1 to i exists
        // and determine in friend's session if j=0, in my session if j=1
        dp[0][0] = dp[1][0] = dp[1][1] = INF;
        dp[1][0] = a[1];
        dp[2][0] = dp[1][0] + a[2];
        dp[2][1] = min(dp[1][0], dp[0][0]);
        for (int i=3 ; i<=n ; i++) {
            dp[i][0] = min(dp[i-1][1] + a[i], dp[i-2][1] + a[i] + a[i-1]);
            dp[i][1] = min(dp[i-1][0], dp[i-2][0]);
        }

        ans = min(dp[n][0], dp[n][1]);
        ans_arr.push_back(ans);

        // clear vector
        for (int i=0 ; i<=n ; i++) dp[i][0] = dp[i][1] = 0;
        for (int i=1 ; i<=n ; i++) a[i] = 0;
    }

    for (auto ans: ans_arr) cout << ans << endl;

    return 0;
}

/*
Test Case #1:
6
8
1 0 1 1 0 1 1 1
5
1 1 1 1 0
7
1 1 1 1 0 0 1
6
1 1 1 1 1 1
1
1
1
0
Output:
2
2
2
2
1
0
*/