#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> need = {1, 1, 2, 2, 2, 8};
    vector<int> cur(6);
    for (int i = 0; i < 6; i++) {
        cin >> cur[i];
    }

    for (int i = 0; i < 6; i++) {
        cout << need[i] - cur[i] << ' ';
    }

    return 0;
}