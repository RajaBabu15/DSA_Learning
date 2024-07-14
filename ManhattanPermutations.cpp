#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, k; cin >> n >> k;
	vector<int> vec(n); iota(vec.begin(), vec.end(), 1);
	vector<int> rb(n); iota(rb.begin(), rb.end(), 1);
	int s = 0, e = n - 1;
	int p = 0;
	while (s < e) {
		swap(vec[s], vec[e]);
		p += abs(vec[s] - rb[s]) + abs(vec[e] - rb[e]);
		if (p == k) break;
		else if (p < k) {s++, e--; continue;}
		else {
			p -= abs(vec[s] - rb[s]) + abs(vec[e] - rb[e]);
			swap(vec[s], vec[e]);
			s++;
		}
	}
	if (p != k) cout << "NO" << endl;
	else {
		cout << "YES" << endl; for (auto &ele : vec) cout << ele << " "; cout << endl;
	}
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