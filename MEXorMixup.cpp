#include<bits/stdc++.h>

using namespace std;

int xored(int n) {
	int ans = 0;
	for (int i = n; (i > 0 && (i + 1) % 4) && ( ans ^= i); i--);
	return ans;
}

void solve() {
	int a, b; cin >> a >> b;
	int ans = xored(a - 1), c = a;
	if (ans == b) {cout << c << endl; return;}
	c++;
	if ((ans ^ b) == a) c++;
	cout << c << endl;
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