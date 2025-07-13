/*
Author: passa
Task #: 2A
Task Name: Winner
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

#define NEG_INF INT_MIN

int n, score, mx;
string name;
vector<pair<string, int>> rounds;
map<string, int> final_scores, round_scores;

void read_input() {
    cin >> n;
}

void solve() {
    for (int i = 0 ; i < n ; i++) {
        cin >> name >> score;
        rounds.push_back({name, score});
        final_scores[name] += score;
    }

    for (auto final_score: final_scores) {
        mx = max(mx, final_score.second);
    }

    for (auto round: rounds) {
        name = round.first;
        score = round.second;
        round_scores[name] += score;
        if (round_scores[name] >= mx && final_scores[name] == mx) {
            cout << name << endl;
            break;
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}