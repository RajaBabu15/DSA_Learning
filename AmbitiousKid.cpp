#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int ans = INT_MAX;
	for (int i = 0, ele; i < n; i++) cin >> ele, ans = min(ans, abs(ele));
	cout << ans << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t = 1;
	while (t--) {
		solve();
	}
	return 0;
}