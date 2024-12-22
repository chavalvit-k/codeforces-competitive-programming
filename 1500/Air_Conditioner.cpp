/*
Author: passa
Task #: 1304C
Task Name: Air Conditioner
Difficulty: 1500
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int q,n,m,t,l,h,ml,mh,diff;
bool cond;
vector<int> T, L, H;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> q;

    while (q--) {
        cin >> n >> m;

        T.push_back(0); L.push_back(0); H.push_back(0);
        for (int i = 0 ; i < n ; i++) {
            cin >> t >> l >> h;
            T.push_back(t);
            L.push_back(l);
            H.push_back(h);
        }

        ml = mh = m;
        cond = true;
        for (int i = 0 ; i < n ; i++) {
            diff = T[i + 1] - T[i];
            if (!(L[i + 1] <= mh + diff && H[i + 1] >= ml - diff)) {
                cond = false;
                break;
            }
            ml = max(L[i + 1], ml - diff);
            mh = min(H[i + 1], mh + diff);
        }

        cout << (cond ? "YES" : "NO") << endl;

        // clear
        T.clear();
        L.clear();
        H.clear();
    }

    return 0;
}