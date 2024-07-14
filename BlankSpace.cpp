#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int c = 0, mx = 0;
		for (int i = 0, ele; i < n && cin >> ele; i++) if (ele) c = 0; else c++, mx = max(mx, c);
	cout << mx << endl;
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