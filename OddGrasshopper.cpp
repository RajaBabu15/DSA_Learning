#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long x0, n; cin >> x0 >> n;
	long long d;
	switch (n % 4) {
	case 1: d = -n; break;
	case 2: d = 1; break;
	case 3: d = 1 + n; break;
	default: d = 0;
	}
	cout << (x0 + (x0 & 1 ? -d : d)) << endl;
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
