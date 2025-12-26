#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for(int i = 0; i < n; i++) v[i] = i + 1;

    for(int k = 0; k < m; k++){
        int i, j;
        cin >> i >> j;
        swap(v[i-1], v[j-1]);
    }

    for(int i = 0; i < n; i++){
        cout << v[i] << (i + 1 == n ? '\n' : ' ');
    }
}