#include<bits/stdc++.h>

using namespace std;

void solve() {
	vector<int> vec(3); for (auto &ele : vec) cin >> ele;
	sort(vec.begin(), vec.end());
	cout << abs(vec[2] - vec[0]) << endl;

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