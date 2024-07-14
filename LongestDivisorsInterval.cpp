#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long n;
	cin >> n;
	if (n & 1) { cout << 1 << endl; return;}
	for (int i = 2; i <= n; i++) if (n % i != 0) {cout << i - 1 << endl; return;}
	cout << n << endl;
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