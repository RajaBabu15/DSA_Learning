#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	int i = 0;
	for (; i < n; i++) {
		if (vec[i] != vec[0]) break;
	}
	int e = n - 1;
	for (; e >= 0; e--) {
		if (vec[e] != vec[0]) break;
	}
	int cost1 = max(0, e - i + 1);
	i = 0;
	for (; i < n; i++) {
		if (vec[i] != vec[n - 1]) break;
	}
	e = n - 1;
	for (; e >= 0; e--) {
		if (vec[e] != vec[n - 1]) break;
	}
	int cost2 = max(0, e - i + 1);
	cout << min(cost1, cost2) << endl;
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