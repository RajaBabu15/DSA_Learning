#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	long long ans = INT_MAX; int t = 0;
	for (int i = 0; i < n; i++) {
		ans = min<long long>(ans, (k - vec[i] % k) % k);
		t += (vec[i] % 2 == 0) + (vec[i] % 4 == 0);
	}
	if (k == 4) cout << min<long long>(ans, 2 - min(2, t)) << endl;
	else cout << ans << endl;

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