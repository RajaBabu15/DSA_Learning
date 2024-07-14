#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	if (k >= n - 1) cout << 1 << endl;
	else cout << n << endl;
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