#include<bits/stdc++.h>

using namespace std;


class SGT {

public:
	vector<int> seg;
	vector<int> vec;
	int n;

	SGT(vector<int> &v1) {
		vec = v1;
		n = vec.size();
		seg.resize(2 * n + 1);
	}
	void buildi(int ind, int low, int high) {
		if (low == high) {
			seg[ind] = vec[low];
			return;
		}
		int mid = (low + high) >> 1;
		buildi(2 * ind + 1, low, mid);
		buildi(2 * ind + 2, mid + 1, high);
		seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
	}

	void build() {
		buildi(0, 0, n - 1);
	}

	int queryi(int ind, int low, int high, int L, int R) {
		//[low high][L R] [L R][low high] //No Overlap
		if (high < L || R < low) return 0;
		// Complete Overlap [L[low high]R]
		else if (L <= low && high <= R) return seg[ind];
		// Partial Overlap
		else {
			int mid = (low + high) >> 1;
			int left = queryi(2 * ind + 1, low, mid, L, R);
			int right = queryi(2 * ind + 2, mid + 1, high, L, R);
			return left + right;
		}
	}
	int query(int L, int R) {
		return queryi(0, 0, n - 1, L, R);
	}
};

void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (auto &ele : vec) cin >> ele;
	vector<int> fcost(n);
	fcost[0] = 1;
	for (int i = 0; i < n - 1; i++) {
		if (vec[i + 1] - vec[i] > vec[i] - vec[i - 1]) fcost[i] = vec[i + 1] - vec[i];
		else fcost[i] = 1;
	}
	fcost[n - 1] = 1;
	vector<int> bcost(n);
	bcost[n - 1] = 1;
	for (int i = n - 2; i > 0; i--) {
		if (vec[i] - vec[i - 1] > vec[i + 1] - vec[i]) bcost[i] = vec[i] - vec[i - 1];
		else bcost[i] = 1;
	}
	bcost[0] = 1;
	SGT f(fcost), b(bcost);
	f.build(), b.build();
	int q; cin >> q;
	while (q--) {
		int l, r; cin >> l >> r;
		if (l < r) {cout << f.query(l - 1, r - 2) << endl;}
		else {cout << b.query(r, l - 1) << endl;}
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t ; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}