#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	int z = 0; for (char &c : s) if (c == '0') z++; int to = n - z;
	int c = 0, o = 0;
	vector<int> vec(n + 1, 0);
	for (int i = 0; i <= n; i++) {
		if (i != 0 && i != n && s[i - 1] == '0') c++;
		if (i != 0 && i != n && s[i - 1] == '1') o++;
		if (c >= ceil(i / 2.0) && (to - o) >= ceil((n - i) / 2.0)) {vec[i] = 1;}
	}
	for (auto &ele : vec) cout << ele << " ";
	n = (int)vec.size(); double mid = n / 2.0;
	vector<pair<int, int>> vp(n);
	for (int i = 0; i < n; i++) vp[i] = {vec[i], i};


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