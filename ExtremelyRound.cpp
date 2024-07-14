#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	int ans = 0;
	while (n > 10) ans += 9, n /= 10;
	ans += n;
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