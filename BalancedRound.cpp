#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> vec(n);
	for (auto &ele : vec) cin >> ele;
	sort(vec.begin(), vec.end());
	int mx = 1, c = 1;
	for (int i = 1; i < n; i++) {
		if (vec[i] - vec[i - 1] <= k) c++, mx = max(mx, c);
		else c = 1;
	}
	cout << n - mx << endl;
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