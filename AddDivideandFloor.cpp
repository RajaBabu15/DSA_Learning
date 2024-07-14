#include<bits/stdc++.h>

using namespace std;

void solve() {
	int a, b; cin >> a >> b;
	int mn = INT_MAX;
	for (int i = 0; i < 7; i++) {
		if ((b + i) == 1) continue;
		int tmp = a, c = i;
		while (tmp) {
			tmp /= (b + i), c++;
		}
		mn = min(mn, c);
	}
	cout << mn << endl;
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