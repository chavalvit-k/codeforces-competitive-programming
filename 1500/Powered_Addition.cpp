/*
Author: passa
Task #: 1388A
Task Name: Powered Addition
Difficulty: 1500
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t,n,a;
vector<int> A;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n;

        for (int i = 0 ; i < n ; i++) {
            cin >> a;
            A.push_back(a);
        }

        int mx = -1;
        for (int i = 1 ; i < n ; i++) {
            if (A[i] < A[i - 1]) {
                mx = max(mx, A[i - 1] - A[i]);
                A[i] = A[i - 1];
            }
        }

        A.clear();

        cout << (mx == -1 ? 0 : floor(log2(mx)) + 1) << endl;
    }

    return 0;
}