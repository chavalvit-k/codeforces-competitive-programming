/*
Author: passa
Task #: 1926C
Task Name: Vlad and a Sum of Sum of Digits
Difficulty: 1200
Solution: DP
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

const int MXN = 2e5 + 1;

vector<int> answers(MXN);

int get_sum_digits(int n) {
    int sum_digits = 0;
    while (n > 0) {
        sum_digits += n % 10;
        n /= 10;
    }
    
    return sum_digits;
}

void init() {
    answers[1] = 1;
    for (int i = 2; i < MXN ; i++) {
        answers[i] = answers[i - 1] + get_sum_digits(i);
    }
}

void solve() {
    int n;
    cin >> n;

    cout << answers[n] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    init();
    while (t--) solve();

    return 0;
}