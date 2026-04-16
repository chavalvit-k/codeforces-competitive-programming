/*
Author: passa
Task #: 82A
Task Name: Double Cola
Difficulty: 1100
Tags: math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

string names[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

void solve() {
    int n;
    cin >> n;

    int i = 1, idx = -1, cnt = 0, step = 1;

    while (i <= n) {
        i += step;
        cnt++; idx++;
        if (cnt == 5) {
            step *= 2;
            cnt = 0;
        }
    }

    cout << names[idx % 5] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
