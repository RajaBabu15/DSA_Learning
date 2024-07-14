#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	map<long long, long long> mp; mp[0] = 1;
	long long sum = 0ll;
	for (int i = 0; i < n; i++) {
		vec[i] *= (i & 1 ? 1 : -1);
		sum += vec[i];
		if (mp[sum]) {cout << "YES" << endl; return;}
		mp[sum]++;
	}
	cout << "NO" << endl;
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