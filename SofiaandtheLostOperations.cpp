#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n), b(n); for (auto &ele : a) cin >> ele; for (int &ele : b) cin >> ele;

	int m; cin >> m;
	vector<int> d(m); for (auto &ele : d) cin >> ele;


	map<int, int> mp;
	for (int i = 0; i < n; i++) if (a[i] != b[i]) mp[b[i]]++;

	map<int, int> mp2;
	for (auto &ele : d) mp2[ele]++;


	for (auto &[k, v] : mp) if (mp2[k] < v) {cout << "NO" << endl; return;}

	if (count(b.begin(), b.end(), d[m - 1]) == 0) {cout << "NO" << endl; return;}

	cout << "YES" << endl; return;

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