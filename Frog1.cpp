#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n; cin >> n;
	vector<int> h(n); for (auto &ele : h) cin >> ele;
	vector<int> cost(n);
	cost[0] = 0;
	cost[1] = abs(h[1] - h[0]);
	for (int i = 2; i < n; i++) {
		cost[i] = min(cost[i - 1] + abs(h[i] - h[i - 1]), cost[i - 2] + abs(h[i] - h[i - 2]));
	}
	cout << cost[n - 1] << endl;


}

signed main() {

	int t = 1;
	while (t--) {
		solve();
	}
	return 0;
}