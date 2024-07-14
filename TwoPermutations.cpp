#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, a, b; cin >> n >> a >> b;
	cout << (n - a - b > 1 || n == a && n == b ? "YES" : "NO") << endl;
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