#include<bits/stdc++.h>

using namespace std;

#define int long long


void solve() {
	int ain, bin, r; cin >> ain >> bin >> r;
	int a = max(ain, bin);
	int b = min(ain, bin);
	int x = 0;
	for (int i = 65; i >= 0; i--) {
		int ai = (a & (1 << i)), bi = b & (1 << i);
		if (ai && !bi) {
			int tmp = (x | (1 << i));
			if (tmp <= r && abs((a ^ x) - (b ^ x)) > abs((a ^ tmp) - (b ^ tmp))) x = tmp;
		}

	}
	cout << abs((a ^ x) - (b ^ x)) << endl;
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