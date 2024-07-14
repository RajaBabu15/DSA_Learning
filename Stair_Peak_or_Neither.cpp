#include<bits/stdc++.h>

using namespace std;

void solve() {
	int a, b, c; cin >> a >> b >> c;
	if (a < b && b < c) cout << "STAIR" << endl;
	else if (a < b && b > c) cout << "PEAK" << endl;
	else cout << "NONE" << endl;
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