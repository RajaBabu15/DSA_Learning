#include<bits/stdc++.h>

using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	cout << ((a + b) & 1 ? "Alice" : "Bob") << endl;
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