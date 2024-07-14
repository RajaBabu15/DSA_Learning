#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	string str = "";
	for (int i = 0; i < k; i++)
		str += (char)('a' + i);
	string ans = "";
	for (int i = 0; i < n; i++) ans += str;
	cout << ans << endl;
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