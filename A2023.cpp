#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	double val = 2023;
	for (int i = 0, ele; i < n; i++) {
		cin >> ele;
		val /= ele;
	}
	if (val == round(val)) {
		cout << "YES" << endl << val << " ";
		for (int i = 0; i < k - 1; i++) cout << 1 << " ";
		cout << endl;
	}
	else
		cout << "NO" << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}