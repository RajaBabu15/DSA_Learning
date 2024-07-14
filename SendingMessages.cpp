#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long n, f, a, b;
	cin >> n >> f >> a >> b;
	vector<long long> vec(n);
	for (auto &ele : vec) cin >> ele;
	long long pre = 0;
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		long long var = min((vec[i] - pre) * a, b);
		f -= var;
		if (f <= 0) {cout << "NO" << endl; return;}
		pre = vec[i];
	}
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