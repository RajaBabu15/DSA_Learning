#include<bits/stdc++.h>

using namespace std;

void solve() {
	int a, b, c; cin >> a >> b >> c;
	int ans = a + b / 3; b %= 3;
	if (b == 1 && c >= 2) ans += 1 + ceil((c - 2) / 3.0), cout << ans << endl;
	else if (b == 2 && c >= 1) ans += 1 + ceil((c - 1) / 3.0), cout << ans << endl;
	else if (b == 0) ans += ceil(c / 3.0), cout << ans << endl;
	else cout << -1 << endl;
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