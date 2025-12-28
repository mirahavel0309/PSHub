#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string rev = s;
    reverse(rev.begin(), rev.end());

    cout << (s == rev ? 1 : 0);
    return 0;
}