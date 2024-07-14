#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	int sum = 0; for (auto &ele : vec) sum += ele;
	vector<int> d(n), r(n, -1);
	for (int i = 0; i < n; i++) r[i] = sum % vec[i];
	int l = 1; for (int i = 0; i < n; i++) if (r[i] != 0) l = lcm(l, vec[i]);
	for (int i = 0; i < n; i++) d[i] = sum * l / vec[i];
	int ind = 0;
	for (int i = 1; i < n; i++) if (vec[i] > vec[ind]) ind = i;
	for (int i = 0; i < n; i++) if (i = ind) d[i]--;
	sum -= n - 1;
	for (int i = 0; i < n; i++) if (d[i]*vec[i] <= sum) {cout << "-1" << endl; return;}
	for (auto &ele : d) cout << ele << " "; cout << endl;

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