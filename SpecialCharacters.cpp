#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	if (n & 1) {cout << "NO" << endl; return;}
	else {
		string ans = "";
		char ch = 'A';
		for (int i = 0; i < n; i += 2) {
			ans += ch ;
			ans += ch ;
			if (ch == 'A') ch = 'B';
			else ch = 'A';
		}
		cout << "YES" << endl << ans << endl; return;
	}
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