#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, sum = 0, min_val = 100;
	bool found = false;

	for (int i = 0; i < 7; i++) {
		cin >> n;

		if (n % 2 != 0) {
			sum += n;
			min_val = min(min_val, n);
			found = true;
		}
	}

	if (!found) {
		cout << -1;
	} else {
		cout << sum << '\n' << min_val;
	}
}