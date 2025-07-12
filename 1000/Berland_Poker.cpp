/*
Author: passa
Task #: 1359A
Task Name: Berland Poker
Difficulty: 1000
Solution: Math
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int t, n, m, k;

void read_input() {
    cin >> t;
}

void solve() {
    while (t--) {
        cin >> n >> m >> k;

        int cards = n / k;
        int joker_left, first_max, second_max, other_players;

        if (cards >= m) {
            joker_left = 0;
            first_max = m;
        } else {
            joker_left = m - cards;
            first_max = cards;
        }

        other_players = k - 1;
        second_max = (joker_left + other_players - 1) / other_players;

        cout << first_max - second_max << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    read_input();
    solve();

    return 0;
}