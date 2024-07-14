#include<bits/stdc++.h>

using namespace std;

void solve() {
	int x, k;
	cin >> x >> k;
	if (k > x) cout << 1 << endl << x << endl;
	else {
		if (x % k != 0) cout << 1 << endl << x << endl;
		else cout << 2 << endl << x - 1 << " " << 1 << endl;
	}
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