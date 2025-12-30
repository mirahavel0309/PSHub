#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ans = 0;
    while (n--) {
        int x;
        cin >> x;

        if (x < 2) continue;

        bool ok = true;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                ok = false;
                break;
            }
        }

        if (ok) ans++;
    }

    cout << ans;
}