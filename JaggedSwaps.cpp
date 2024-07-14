#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int a; cin >> a;
	for (int i = 1, ele; i < n; i++) cin >> ele;
	cout << (a == 1 ? "YES" : "NO") << endl;
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