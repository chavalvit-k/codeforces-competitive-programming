/*
Author: passa
Task #: 1033A
Task Name: King Escape
Difficulty: 1000
Solution: Table Recursion
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define MXN 1010

int n,ax,ay,bx,by,cx,cy;
int visited[MXN][MXN];

void walk(int i, int j);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    walk(bx, by);

    cout << (visited[cx][cy] ? "YES" : "NO") << endl;
    
    return 0;
}

void walk(int j, int i) {
    if (j < 1 || i < 1 || j > n || i > n) return ;
    if (j == ax || i == ay || ( abs(j - ax) == abs(i - ay) )) return ;
    if (visited[j][i]) return ;
    if (j == cx && i == cy) {
        visited[j][i] = true;
        return ;
    }

    visited[j][i] = true;

    for (int ii = -1 ; ii <= 1 ; ii++) {
        for (int jj = -1 ; jj <= 1 ; jj++) {
            if (!(ii == 0 && jj == 0)) {
                walk(j + jj, i + ii);
            }
        }
    }
}