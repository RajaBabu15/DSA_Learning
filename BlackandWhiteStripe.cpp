#include<bits/stdc++.h>

using namespace std;


void solve() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<int> w(n + 1);
	for (int i = 1; i <= n; i++)
		w[i] = w[i - 1] + int(s[i - 1] == 'W');
	int result = INT_MAX;
	for (int i = k; i <= n; i++)
		result = min(result, w[i] - w[i - k]);
	cout << result << endl;
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