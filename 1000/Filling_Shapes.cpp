/*
Author: passa
Task #: 1182A
Task Name: Filling Shapes
Difficulty: 1000
Language: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

int n;
long answer;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    if (n % 2 != 0)
        cout << 0 << endl;

    else {
        answer = pow(2, n/2);
        cout << answer << endl;
    }

    return 0;
}