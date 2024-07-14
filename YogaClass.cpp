#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, x, y;
	if ((x << 1) > y) cout << n*x << endl;
	else cout << n / 2 * y + (n & 1)*x << endl;

}

signed main() {
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