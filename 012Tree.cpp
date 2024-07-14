#include<bits/stdc++.h>

using namespace std;

void solve() {
	int a, b, c; cin >> a >> b >> c;
	if (a + 1 != c) {cout << -1 << endl; return;}
	int h = ceil(log2(a + 1));

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