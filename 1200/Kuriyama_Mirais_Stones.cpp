/*
Author: passa
Task #: 433B
Task Name: Kuriyama Mirai's Stones
Difficulty: 1200
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 100010

int n,v,m,t,l,r;
long long dp_1[MXN], dp_2[MXN];
long long ans_1,ans_2;
vector<int> A;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 0 ; i < n ; i++) {
        cin >> v;
        A.push_back(v);
    }

    // question 1
    dp_1[0] = A[0];
    for (int i = 1 ; i < n ; i++) {
        dp_1[i] = dp_1[i - 1] + A[i];
    }

    // question 2
    sort(A.begin(), A.end());

    dp_2[0] = A[0];
    for (int i = 1 ; i < n ; i++) {
        dp_2[i] = dp_2[i - 1] + A[i];
    }

    cin >> m;
    
    while (m--) {
        cin >> t >> l >> r;
        l --; r--;

        if (t == 1) {
            cout << dp_1[r] - dp_1[l - 1] << endl;
        } else if (t == 2) {
            cout << dp_2[r] - dp_2[l - 1] << endl;
        }
    }

    return 0;
}