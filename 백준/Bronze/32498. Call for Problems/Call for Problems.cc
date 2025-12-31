#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cnt = 0;
	cin >> n;

	for (int i=0; i<n; i++) {
		int d;
		cin >> d;
		cnt += (d%2 ? 1:0);
	}
	cout << cnt;
}