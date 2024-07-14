#include<bits/stdc++.h>

using namespace std;

void build(int ind, int low, int high, vector<int> &seg, vector<int> &vec) {
	if (low == high) {
		seg[ind] = vec[low];
		return;
	}
	int mid = (low + high) >> 1;
	build(2 * ind + 1, low, mid, seg, vec);
	build(2 * ind + 2, mid + 1, high, seg, vec);
	seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
}

int query(int ind, int low, int high, int L, int R, vector<int> &seg) {
	//[low high][L R] [L R][low high] //No Overlap
	if (high < L || R < low) return 0;
	// Complete Overlap [L[low high]R]
	else if (L <= low && high <= R) return seg[ind];
	// Partial Overlap
	else {
		int mid = (low + high) >> 1;
		int left = query(2 * ind + 1, low, mid, L, R, seg);
		int right = query(2 * ind + 2, mid + 1, high, L, R, seg);
		return min(left, right);
	}
}

void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (auto &ele : vec) cin >> ele;
	vector<int> seg(4 * n + 1, -1);


	build(0, 0, n - 1, seg, vec);
	int q; cin >> q;
	while (q--) {
		int type; cin >> type;
		if (type == 1) {
			int L, R; cin >> L >> R;
			cout << query(0, 0, n - 1, L, R, seg) << endl;
		}
		else {
			int i, val; cin >> i >> val;
			update(0, 0, n - 1, i, val, seg);
		}
	}
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