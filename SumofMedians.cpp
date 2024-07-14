#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long n, k;
	cin >> n >> k;
	vector<int> vec(n * k);
	for (auto &ele : vec) cin >> ele;
	long long val = n - ceil(1.0 * n / 2) + 1;
	long long ans = 0ll;
	for (int i = n * k, count = 0; i >= 0 && count < k; i -= val, count++)  ans += vec[i - val];
	cout << ans << endl;
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