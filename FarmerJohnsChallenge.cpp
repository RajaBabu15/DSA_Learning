#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	if (k == n) { for (int i = 1; i <= n; i++) cout << 1 << " "; cout << endl;  return;}
	else if (k == 1) {for (int i = 1; i <= n; i++) cout << i << " "; cout << endl; return;}
	else cout << -1 << endl;
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