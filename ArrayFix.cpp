#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	int d = vec[n - 1];
	bool flag = true;
	for (int i = n - 2; i >= 0; i--) {
		if (vec[i] <= d) {d = vec[i]; continue;}
		if (vec[i] / 10 > vec[i] % 10 || vec[i] % 10 > d) {flag = false; break;}
		else d = vec[i] / 10;
	}
	if (flag) cout << "YES" << endl;
	else cout << "NO" << endl;
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