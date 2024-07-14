#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long n; cin >> n;
	if (n & 1 || n < 4) {cout << -1 << endl; return;}
	n /= 2;
	long long mx = n / 2, mn  = n / 3 + (n % 3 != 0);
	cout << mn << " " << mx << endl;

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