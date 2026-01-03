#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string s; cin >> s;
    int cnt[26] = {0};

    for (char c : s) cnt[toupper(c) - 'A']++;

    int mx = 0, idx = -1;
    bool tie = false;

    for (int i = 0; i < 26; i++) {
        if (cnt[i] > mx) {
            mx = cnt[i];
            idx = i;
            tie = false;
        } else if (cnt[i] == mx && mx != 0) {
            tie = true;
        }
    }

    cout << (tie ? '?' : char('A' + idx)) << '\n';
}