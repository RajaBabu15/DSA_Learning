#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, m, k; cin >> n >> m >> k;
	vector<int> a(n); for (auto &ele : a) cin >> ele;
	vector<int> d(m); for (auto &ele : d) cin >> ele; sort(d.begin(), d.end());
	vector<int> f(k); for (auto &ele : f) cin >> ele; sort(f.begin(), f.end());

	vector<int> diff(n);
	adjacent_difference(a.begin(), a.end(), diff.begin()); diff.erase(diff.begin());
	sort(diff.begin(), diff.end(), greater<int>());

	set<pair<int, int>> st;
	for (int i = 0; i < n - 1; i++) {
		st.insert({a[i + 1] - a[i], i});
	}

	int a_k = a[(*st.rbegin()).second], a_k1 = a[(*st.rbegin()).second + 1];
	vector<int> ans = {diff[0]};
	for (int i = 0; i < m; i++) {
		int j = lower_bound(f.begin(), f.end(), (((long long)a_k + a_k1) >> 1) - d[i]) - f.begin();
		if (a_k < d[i] + f[j] && d[i] + f[j] < a_k1) ans.push_back(max(d[i] + f[j] - a_k, a_k1 - d[i] - f[j]));
	}
	int tmp = *min_element(ans.begin(), ans.end());
	if (n > 2) {tmp = max(tmp, diff[1]);}
	cout << tmp << endl;
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