#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, m, x, y; cin >> n >> m >> x >> y;
	int x1 = 1, x2 = n, y1, y2;
	if (x - x1 < x2 - x) y1 = m, y2 = 1;
	else y1 = m, y2 = 1;
	cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
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