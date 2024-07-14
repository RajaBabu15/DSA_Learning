#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, k, x; cin >> n >> k >> x; int sum = 0;
	vector<int> vec(n), p(n, 0); for (auto &ele : vec) cin >> ele, sum += ele;
	sort(vec.begin(), vec.end());
	int mx = INT_MIN;
	int lastx = 0;
	for (int i = n - 1; i >= max(0, n  - x); i--) {
		lastx += vec[i];
	}
	mx = max(mx, sum - 2 * lastx);
	for (int i = n - 1; i >= max(0, n  - k); i--) {
		if (i - x < 0) lastx = lastx - vec[i];
		else
			lastx = lastx - vec[i] + vec[i - x];
		sum -= vec[i];
		mx = max(mx, sum - 2 * lastx);
	}
	cout << mx << endl;
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