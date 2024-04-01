/*
Author: passa
Task #: 276C
Task Name: Little Girl and Maximum Sum
Difficulty: 1500
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 200100

int n,q,l,r;
long long ans;
vector<int> nums(MXN);
vector<long long> weights(MXN);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> q;

    for (int i=1 ; i<=n ; i++) cin >> nums[i];
    for (int i=1 ; i<=q ; i++) {
        cin >> l >> r;
        weights[l]++; weights[r+1]--;   // marking intervals
    }

    // quick sum from intervals
    for (int i=1 ; i<=n ; i++) weights[i] += weights[i-1];

    sort(nums.begin() + 1, nums.begin() + n + 1, greater<int>());
    sort(weights.begin() + 1, weights.begin() + n + 1, greater<int>());

    for (int i=1 ; i<=n ; i++) ans += nums[i] * weights[i];

    cout << ans << endl;

    return 0;
}

/*
Test Case #1:
3 3
5 3 2
1 2
2 3
1 3
Output: 25
---------------
Test Case #2:
5 3
5 2 4 1 3
1 5
2 3
2 3
Output: 33
*/