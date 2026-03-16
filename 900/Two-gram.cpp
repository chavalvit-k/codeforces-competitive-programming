/*
Author: passa
Task #: 977B
Task Name: Two-gram
Difficulty: 900
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> two_grams;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    for (int i = 0 ; i < n - 1 ; i++) {
        string two_gram = s.substr(i, 2);
        two_grams[two_gram]++;
    }

    int max_freq = 0;
    string answer;

    for (const auto& [two_gram, freq] : two_grams) {
        if (freq > max_freq) {
            answer = two_gram;
            max_freq = freq;
        }
    }

    cout << answer << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
