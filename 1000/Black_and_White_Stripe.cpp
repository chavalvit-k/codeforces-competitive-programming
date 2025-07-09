/*
Author: passa
Task #: 1690D
Task Name: Black and White Stripe
Difficulty: 1000
Solution: Prefix Sum
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 200010
#define INF INT_MAX

int t, n, k, a, mn;
string s;
int stripe[MXN], sum[MXN];

void read_input() {
    cin >> t;
}

void solve() {
    while (t--) {
        cin >> n >> k;

        cin >> s;
        for (int i = 1 ; i <= n ; i++) {
            stripe[i] = s[i - 1] == 'W';
        }

        sum[1] = stripe[1];
        for (int i = 2 ; i <= n ; i++) {
            sum[i] = sum[i - 1] + stripe[i];
        }

        mn = INF;
        for (int i = 1, j = k ; j <= n ; i++, j++) {
            mn = min(mn, sum[j] - sum[i - 1]);
        }

        cout << mn << endl;
    } 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}