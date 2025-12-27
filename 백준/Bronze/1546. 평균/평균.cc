#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<double> scores(n);

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    double m = *max_element(scores.begin(), scores.end());
    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += scores[i] / m * 100;
    }
    

    cout << sum / n;

    return 0;
}