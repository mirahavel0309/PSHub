#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll a, b;
	cin >> a >> b;

	ll l = min(a, b);
	ll r = max(a, b);

	ll cnt = max(0LL, r - l - 1);
	
	cout << cnt << '\n';
	for (ll i = l + 1; i <= r - 1; i++) {
		cout << i << ' ';
	}
}