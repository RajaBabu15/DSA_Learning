#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	vector<int> ind(n);
	iota(ind.begin(), ind.end(), 0);
	sort(ind.begin(), ind.end(), [&](const int &a, const & b) {
		return vec[a] < vec[b];
	});
	int t = 1; int ans = 0;
	while (ind.size() > 0) {
		ans += 2 * t * vec[ind[ind.size() - 1]];  vec[ind[ind.size() - 1]] = t; ind.pop_back();
		if (ind.size() > 0) {ans += 2 * t * vec[ind[ind.size() - 1]];  vec[ind[ind.size() - 1]] = -t; ind.pop_back();}
		t++;
	}
	cout << ans << endl << 0 << " ";
	for (auto &ele : vec) cout << ele << " "; cout << endl;

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