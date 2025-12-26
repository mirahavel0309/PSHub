#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    unordered_map<string, char> mp;
    for(int i = 0; i < t; i++){
        char c;
        string b;
        cin >> c >> b;
        mp[b] = c;
    }

    string s;
    cin >> s;

    for(int i = 0; i < (int)s.size(); i += 4){
        string chunk = s.substr(i, 4);
        cout << (mp.count(chunk) ? mp[chunk] : '?');
    }
}