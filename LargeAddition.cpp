#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n; cin >> n;
	while (n > 0) {
		if (n % 10 == 9) {cout << "NO" << endl; return;}
		n /= 10; n -= 1;
	}
	if (n < 0) {cout << "NO" << endl; return;}
	else cout << "YES" << endl;
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