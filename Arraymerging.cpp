#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n; cin >> n;
	vector<int> a(n), b(n); for (auto &ele : a) cin >> ele; for (auto &ele : b) cin >> ele;
	int last = a[0], count = 0;
	map<int, int> mpa, mpb; mpa.clear(), mpb.clear();
	for (int i = 0; i < n; i++) {
		if (a[i] == last) {
			count++;
			mpa[a[i]] = max(mpa[a[i]], count);
		}
		else {
			count = 1;
			last = a[i];
			mpa[a[i]] = max(mpa[a[i]], count);
		}
	}
	last = b[0], count = 0;
	for (int i = 0; i < n; i++) {
		if (b[i] == last) {
			count++;
			mpb[b[i]] = max(mpb[b[i]], count);
		}
		else {
			count = 1;
			last = b[i];
			mpb[b[i]] = max(mpb[b[i]], count);
		}
	}
	for (const auto &ele : mpb) mpa[ele.first] += ele.second;
	int mx = INT_MIN;
	for (const auto &ele : mpa) mx = max(mx, ele.second);
	cout << mx << endl;

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