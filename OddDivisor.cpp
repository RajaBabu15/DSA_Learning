#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long num;
	cin >> num;
	bitset<64> b(num);
	if (b.count() == 1) cout << "NO" << endl;
	else cout << "YES" << endl;
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