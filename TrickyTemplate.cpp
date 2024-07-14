#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	string a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < n; i++) {
		if (a[i] == b[i] && b[i] == c[i]) continue;
		if (a[i] == c[i] || b[i] == c[i]) {cout << "NO" << endl; return;}
	}
	cout << "YES" << endl;
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