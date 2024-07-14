#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n; cin >> n; int sum = 0ll;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele, sum += ele;
	sum /= n;
	int hold = 0;
	for (int i = 0; i < n; i++) {
		if (vec[i] == sum) continue;
		else if (vec[i] > sum) hold += vec[i] - sum;
		else if (hold + vec[i] < sum) {cout << "NO" << endl; return;}
		else hold -= sum - vec[i];
	}
	cout << "YES" << endl;
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