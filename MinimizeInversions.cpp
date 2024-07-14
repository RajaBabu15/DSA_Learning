#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<pair<int, int>> vec(n); for (auto &ele : vec) cin >> ele.first; for (auto &ele : vec) cin >> ele.second;
	sort(vec.begin(), vec.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
		return a.first < b.first;
	});
	for (auto &ele : vec) cout << ele.first << " "; cout << endl; for (auto &ele : vec) cout << ele.second << " "; cout << endl;
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