#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, c, d; cin >> n >> c >> d;
	vector<int> vec(n * n); for (auto &ele : vec) cin >> ele;
	sort(vec.begin(), vec.end());
	int a = vec[0], p = 0;
	vector<int> tmp(n * n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0) tmp[p++] = a, a += d;
			else tmp[p] = tmp[p - 1] + c, p++;
		}
	}
	sort(tmp.begin(), tmp.end());
	for (int i = 0; i < n * n; i++) if (tmp[i] != vec[i]) {cout << "NO" << endl; return;}
	cout << "YES" << endl;
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