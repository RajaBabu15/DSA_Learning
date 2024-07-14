#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	int ans = ~0;
	for (int i = 0, ele; i < n && cin >> ele; i++) ans &= ele;
	cout << ans << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		Exciting Bets
		solve();
	}
	return 0;
}