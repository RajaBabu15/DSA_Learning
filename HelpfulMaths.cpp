
#include<bits/stdc++.h>
using namespace std;

class FenwickTree {
	vector<int> BIT;  // Binary Indexed Tree
	int n;  // Size of array

public:
	FenwickTree(const vector<int> &vec, int _n) {
		n = _n;
		BIT.assign(n + 1, 0);
		for (auto &ele : vec) update(ele, 1);
	}

	void update(int idx, int val) {
		for (; idx <= n; idx += idx & -idx)
			BIT[idx] += val;
	}

	int prefixSum(int idx) {
		int sum = 0;
		for (; idx > 0; idx -= idx & -idx)
			sum += BIT[idx];
		return sum;
	}

	void rangeSum() {
		int l, r;
		cin >> l >> r;
		cout << (prefixSum(r) - prefixSum(l - 1)) << endl;
	}
};

void solve() {
	int n, m; cin >> n >> m;
	vector<int> vec(n + 1, 0);
	for (int i = 0, ele; i < m && cin >> ele; i++) vec[ele] = 1;
	int q; cin >> q;
	FenwickTree ft(vec, n + 1);
	while (q--) ft.rangeSum();
}

signed main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t = 1;
	while (t--) solve();
	return 0;
}
