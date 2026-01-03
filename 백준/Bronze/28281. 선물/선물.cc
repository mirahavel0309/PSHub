#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long best = LLONG_MAX;
    for (int i = 0; i < n - 1; i++) {
        best = min(best, a[i] + a[i + 1]);
    }

    cout << best * x << "\n";
    return 0;
}