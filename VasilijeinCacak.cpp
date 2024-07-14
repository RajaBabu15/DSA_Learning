#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long n, k, x; cin >> n >> k >> x;
	if (x >= k * (k + 1) / 2 && x <= k * (2 * n - k + 1) / 2) cout << "YES" << endl;
	else cout << "NO" << endl;
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