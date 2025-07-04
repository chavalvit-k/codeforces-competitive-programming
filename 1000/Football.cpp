/*
Author: passa
Task #: 43A
Task Name: Football
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n, mx = -1;
string team, winning_team;
map<string, int> scores;

void read_input() {
    cin >> n;
    for (int i = 0 ; i < n ; i++) {
        cin >> team;
        scores[team]++;
    }
}

void solve() {
    for (const auto& [team, score] : scores) {
        if (score > mx) {
            mx = score;
            winning_team = team;
        }
    }

    cout << winning_team << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}