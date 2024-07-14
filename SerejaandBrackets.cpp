#include<bits/stdc++.h>

using namespace std;

class SGT {
private:
	struct dt
	{
		int open, closed, full;
		dt(): open(0), closed(0), full(0) {}
		dt(int _o, int _c, int _f): open(_o), closed(_c), full(_f) {}
	};
	vector<dt> seg; string str;
	int n;
	void build(int ind, int low, int high) {
		if (low == high) {
			seg[ind] = dt(str[low] == '(', str[low] == ')', 0);
			return;
		}
		int mid = low + (high - low) / 2;
		build(2 * ind + 1, low, mid);
		build(2 * ind + 2, mid + 1, high);
		int _f = min(seg[2 * ind + 1].open, seg[2 * ind + 2].closed);
		int _o = seg[2 * ind + 1].open + seg[2 * ind + 2].open - _f;
		int _c = seg[2 * ind + 1].closed + seg[2 * ind + 2].closed - _f;
		_f += seg[2 * ind + 1].full + seg[2 * ind + 2].full;
		seg[ind] = dt(_o, _c, _f);
	}
	dt query(int ind, int low, int high, const int &L, const int &R) {
		if (high < L || R < low) {
			return dt();
		}
		else if (L <= low && high <= R) return seg[ind];
		else {
			int mid = low + (high - low) / 2;
			dt lval = query(2 * ind + 1, low, mid, L, R);
			dt rval = query(2 * ind + 2, mid + 1, high, L, R);
			int _f = min(lval.open, rval.closed);
			int _o = lval.open + rval.open - _f;
			int _c = lval.closed + rval.closed - _f;
			_f += lval.full + rval.full;
			return dt(_o, _c, _f);
		}
	}
public:
	SGT(const string &_str): n(_str.size()), str(_str) {
		seg.resize(4 * n + 1);
		build(0, 0, n - 1);
	}
	int query(int l, int r) {
		return query(0, 0, n - 1, l, r).full;
	}
};


void solve() {
	string str; cin >> str;
	SGT s(str);
	int q; cin >> q;
	while (q--) {
		int l, r; cin >> l >> r;
		l--, r--;
		cout << s.query(l, r) * 2 << endl;
	}

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t = 1;
	while (t--) {
		solve();
	}
	return 0;
}