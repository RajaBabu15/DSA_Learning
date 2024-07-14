#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	vector<bool> c(n + 1, false);
	for (int i = 0; i < n; i++) {
		c[i] = vec[i] == i + 1;
	}
	int count = 0, ans = 0;
	for (int i = 0; i < n + 1; i++) {
		if (c[i]) count++;
		else {
			if (count == 1) ans += 1, count = 0;
			else if (count > 1) ans += ceil(count / 2.0), count = 0;
		}
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