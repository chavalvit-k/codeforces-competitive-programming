/*
Author: passa
Task #: 2060B
Task Name: Farmer John's Card Game
Difficulty: 1000
Solution: Adhoc
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

const int MXN = 2010;

vector<int> cows[MXN];
vector<pair<int, int>> first_cards;

bool is_valid_cow(vector<int>& cow, int m, int step) {
    if (m == 1) return true;

    bool is_valid = true;
    int current = cow[0];

    for (int i = 1 ; i < m ; i++) {
        if (cow[i] - current != step) {
            is_valid = false;
            break;
        }
        current = cow[i];
    }

    return is_valid;
}

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            int card;
            cin >> card;
            cows[i].push_back(card);
        }
    }

    for (int i = 0 ; i < n ; i++)
        sort(cows[i].begin(), cows[i].end());

    bool is_possible = true;

    for (int i = 0 ; i < n ; i++) {
        if (!is_valid_cow(cows[i], m, n)) {
            is_possible = false;
            break;
        }
    }

    if (!is_possible) cout << -1 << endl;

    else {
        for (int i = 0 ; i < n ; i++)
            first_cards.push_back({cows[i][0], i + 1});

        sort(first_cards.begin(), first_cards.end());

        for (pair<int, int> first_card : first_cards)
            cout << first_card.second << " ";
        cout << endl;
    }

    for (int i = 0 ; i < n ; i++) cows[i].clear();
    first_cards.clear();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
