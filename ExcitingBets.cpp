#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long a, b; cin >> a >> b;
	if (a == b) { cout << "0 0" << endl; return;}
	else {
		if (a < b) swap(a, b);
		long long x = abs(a - b);
		long long y = a % x;
		y = min(y, x - y);
		cout << x << " " << y << endl;
	}
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