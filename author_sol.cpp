#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long ts;
		cin >> ts;
		// divide 'ts' until it becomes an odd number
		while (ts % 2 == 0) {
			ts /= 2;
		}
		// count the even numbers that are present from 1 to 'ts' (new value)
		cout << (ts - 1) / 2 << '\n';
	}
	return 0;
}
