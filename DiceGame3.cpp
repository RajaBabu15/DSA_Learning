#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (i & 1) ans += 1;
		else ans += 12;
	}
	cout << ans << endl;
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