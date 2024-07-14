#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n; cin >> n;
	string str; cin >> str;
	vector<bool> p(26, false), su(26, false);
	vector<int> vec(n + 1, 0);
	int last = 0;
	for (int i = 0; i < n; i++) {
		if (p[str[i] - 'a'] == false) {last++; vec[i + 1] = last; p[str[i] - 'a'] = true;}
		else vec[i + 1] = last;
	}
	last = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (su[str[i] - 'a'] == false) {last++; vec[i] += last; su[str[i] - 'a'] = true;}
		else vec[i] += last;
	}
	int ans = -1;
	for (int i = 0; i < n + 1; i++) {
		ans = max(ans, vec[i]);
	}
	cout << ans << endl;
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