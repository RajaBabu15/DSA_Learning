#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, ans, tmp;
	cin >> n >> ans; tmp = ans;
	ans--;
	for (int i = 2, ele; i <= n && cin >> ele; i++) ans += max(0, ele - tmp), tmp = ele;
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