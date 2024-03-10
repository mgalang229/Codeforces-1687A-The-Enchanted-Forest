#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void test_case(int& tc) {
	int n, k;
	cin >> n >> k;
	ll a[n+1] = {0};
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		a[i] += a[i-1];
	}
	if (k >= n) {
		cout << a[n] + (k - 1LL + k - n) * n / 2;
	} else {
		ll mx = a[k];
		for (int i = k + 1; i <= n; i++) {
			mx = max((ll) mx, a[i] - a[i-k]);
		}
		cout << mx + k * (k - 1LL) / 2;
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
