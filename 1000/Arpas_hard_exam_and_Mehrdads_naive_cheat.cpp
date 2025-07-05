/*
Author: passa
Task #: 742A
Task Name: Arpa’s hard exam and Mehrdad’s naive cheat
Difficulty: 1000
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n, digit_index;
int digits[5] = {8, 4, 2, 6};

void read_input() {
    cin >> n;
}

void solve() {
    if (n == 0) cout << 1 << endl;
    else {
        digit_index = (n - 1) % 4;
        cout << digits[digit_index] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}