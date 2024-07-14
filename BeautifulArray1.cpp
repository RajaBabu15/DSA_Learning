#include<bits/stdc++.h>

using namespace std;

void solve() {
	return ;
	int n, k; cin >> n >> k;
	vector<int> vec(n); for (auto&ele : vec) cin >> ele;
	sort(vec.begin(), vec.end());
	vector<int> used(n, 0);
	int op = 0;
	int i = 0, j = 1;
	while (i < n) {
		if (used[i] == 1) {i++; continue;}
		bool flag = false;
		while (used[j] == 1 || abs(vec[j] - vec[i]) % k != 0) {
			j++;
			j %= n;
			if (j == i) {flag = true; break;}
		}
		op += abs(vec[i] - vec[j]) / k;
		vec[i] = vec[j];
		if (flag == true) break;
	}
	sort(vec.begin(), vec.end());
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (vec[i] == vec[i + 1]) i++;
		else cnt++;
	}
	if (cnt == 0 || (cnt == 1 && n & 1)) cout << op << endl;
	else cout << -1 << endl;
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