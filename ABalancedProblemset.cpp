#include<bits/stdc++.h>

using namespace std;

#define int long long

vector<int> getFactors(int n) {
	vector<int> vec, ans;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) vec.push_back(i), vec.push_back(n / i);
	sort(vec.begin(), vec.end());
	ans.push_back(vec[0]);
	int l = vec[0];

}

void solve() {
	int x, n; cin >> x >> n;
	int d = x / n, r = x % n;
	if (r == 0) cout << d << endl;

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