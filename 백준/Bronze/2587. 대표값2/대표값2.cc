#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int arr[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	sort(arr, arr + 5);

	int avg = sum / 5;
	int med = arr[2];

	cout << avg << '\n' << med;

}