#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int s = 0; s < i - 1; s++) cout << ' ';
        for(int j = 0; j < 2*(n - i) + 1; j++) cout << '*';
        cout << '\n';
    }
}