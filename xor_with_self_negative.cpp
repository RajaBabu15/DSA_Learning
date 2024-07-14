#include<bits/stdc++.h>

using namespace std;

void solve() {
	for (int i = -10; i <= 10; i++) cout << i << " " << (i ^ (-i)) << endl;
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