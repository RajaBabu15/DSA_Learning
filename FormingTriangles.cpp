#include<bits/stdc++.h>

using namespace std;

int fact(int n);
int nCr(int n, int r) {
	return fact(n) / (fact(r) * fact(n - r));
}

int fact(int n) {
	if (n == 0) return 1;
	int res = 1;
	for (int i = 2; i <= n; i++)
		res = res * i;
	return res;
}

void solve() {
	int n; cin >> n;
	vector<int> vec(n);
	for (auto &ele : vec) cin >> ele;
	sort(vec.begin(), vec.end());
	int am1 = INT_MIN, cm1 = 0;
	int p = vec[0], c = 1;
	long long ans = 0;
	for (int i = 1; i < n; i++) {
		if (p == vec[i]) { c++; continue;}
		if (c > 2) ans += nCr(c, 3);
		if (p - 1 == am1 && cm1 > 1 && c > 1) ans += cm1 * nCr(c, 2);
		am1 = p, cm1 = c;
		p = vec[i], c = 1;
	}

	if (c > 2) ans += nCr(c, 3);
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