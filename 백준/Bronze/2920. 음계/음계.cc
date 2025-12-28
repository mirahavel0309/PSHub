#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(8);
    for (int i = 0; i < 8; i++) {
        cin >> v[i];
    }

    bool asc = true, desc = true;

    for (int i = 0; i < 8; i++) {
        if (v[i] != i + 1) asc = false;
        if (v[i] != 8 - i) desc = false;
    }

    if (asc) cout << "ascending";
    else if (desc) cout << "descending";
    else cout << "mixed";

    return 0;
}