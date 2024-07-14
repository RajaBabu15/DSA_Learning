#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	sort(vec.begin(), vec.end());
	int a = vec[0], b = vec[n - 1], c = vec[1], d = vec[n - 2];
	int ans = abs(a - b) + abs(b - c) + abs(c - d) + abs(d - a);
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