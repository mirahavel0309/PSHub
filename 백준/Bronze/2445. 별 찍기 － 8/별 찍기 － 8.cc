#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << string(i, '*')
             << string(2 * (n - i), ' ')
             << string(i, '*') << '\n';
    }

    for (int i = n - 1; i >= 1; i--) {
        cout << string(i, '*')
             << string(2 * (n - i), ' ')
             << string(i, '*') << '\n';
    }
}