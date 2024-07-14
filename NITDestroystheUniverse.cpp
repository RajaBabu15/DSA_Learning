#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	bool flag = false;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (!flag && vec[i]) flag = true, ans++;
		else if (!vec[i]) flag = false;
	}
	cout << min(2, ans) << endl;
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