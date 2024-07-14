#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	long long arr_xor = 0;
	for (long long i = 0, ele; i < n && cin >> ele; i++) arr_xor ^= ele;
	if (!arr_xor) {cout << 0 << endl; return; }
	else if (n & 1) {cout << arr_xor << endl; return;}
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