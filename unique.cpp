#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<vector<int>> vec(n >> 1, vector<int>(2)); for (auto &ele : vec) cin >> ele[0] >> ele[1];
	// sort(vec.begin(), vec.end());
	auto unique_end = unique(vec.begin(), vec.end());
	//
	vec.erase(unique_end, vec.end());
	for (auto &ele : vec) cout << ele[0] << " " << ele[1] << "\n"; cout << endl;
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