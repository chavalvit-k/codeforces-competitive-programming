/*
Author: passa
Task #: 1941B
Task Name: Rudolf and 121
Difficulty: 1000
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
        
        for (int i = 1 ; i < n - 1 ; i++) {
            if (A[i - 1] == 0) {
                continue;
            }
            if (A[i - 1] * 2 > A[i]) {
                cout << "NO" << endl;
                break;
            }

            A[i] -= A[i - 1] * 2;
            A[i + 1] -= A[i - 1];
        }

        if (A[n - 1] == 0 && A[n - 2] == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        A.clear();
    }
    
    return 0;
}