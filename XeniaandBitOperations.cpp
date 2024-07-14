#include<bits/stdc++.h>

using namespace std;

template<typename T>
class SGT {
private:
	vector<T> seg, vec;
	int n, N;
	void build(int ind, int low, int high, int orr) {
		if (low == high) {
			seg[ind] = vec[low];
			return;
		}
		int mid = low + (high - low) / 2;
		build(2 * ind + 1, low, mid, !orr);
		build(2 * ind + 2, mid + 1, high, !orr);
		if (orr) seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
		else seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
	}
	void update(int ind, int low, int high, int i, T val, int orr) {
		if (low == high) {
			seg[ind] = val;
			return;
		}
		int mid = low + (high - low) / 2;
		if (i <= mid) update(2 * ind + 1, low, mid, i, val, !orr);
		else update(2 * ind + 2, mid + 1, high, i, val, !orr);
		if (orr) seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
		else seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
	}
public:
	SGT(vector<T> &inpVec, int nn): vec(inpVec), n(inpVec.size()), N(nn) {
		seg.resize(4 * n + 1);
		build(0, 0, n - 1, N & 1);
	}
	T update(int i, T val) {
		update(0, 0, n - 1, i, val, N & 1);
		return seg[0];
	}
};

void solve() {
	int n, q, i, val;
	cin >> n >> q;
	vector<int> vec(1 << n);
	for (auto &ele : vec) cin >> ele;
	SGT<int> s(vec, n);
	while (q--) {
		cin >> i >> val;
		cout << s.update(i - 1, val) << endl;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t = 1;
	while (t--) solve();	return 0;
}
