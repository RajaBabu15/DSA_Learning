#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	vector<pair<int, int>> p(n), s(n);
	p[0] = {vec[0], 0};
	for (int i = 1; i < n; i++) {
		if (vec[i] < p[i - 1].first) p[i] = {vec[i], i};
		else p[i] = p[i - 1];
	}
	s[n - 1] = {vec[n - 1], n - 1};
	for (int i = n - 2; i >= 0; i--) {
		if (vec[i] < s[i + 1].first) s[i] = {vec[i], i};
		else s[i] = s[i + 1];
	}
	for (int i = 0; i < n - 1; i++) {
		if (p[i].second < i && i < s[i].second ) {cout << "YES" << endl << p[i].second + 1 << " " << i + 1 << " " << s[i].second + 1 << endl; return;}
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