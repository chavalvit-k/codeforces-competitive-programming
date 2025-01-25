/*
Author: passa
Task #: 1472C
Task Name: Long Jumps
Difficulty: 1100
Solution: DP
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 200010
int t,n,ans;
int a[MXN],dp[MXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n;
        for (int i = 1 ; i <= n ; i++) cin >> a[i];

        for (int i = 1 ; i <= n ; i++) {
            dp[i] += a[i];
            if (i + a[i] <= n) {
                dp[i + a[i]] = max(dp[i + a[i]], dp[i]);
            }  
        }

        for (int i = 1 ; i <= n ; i++) ans = max(ans, dp[i]);
        cout << ans << endl;

        memset(a, 0, sizeof(a));
        memset(dp, 0, sizeof(dp));
        ans = 0;
    }

    return 0;
}