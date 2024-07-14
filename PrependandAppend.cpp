#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	int s = 0, e = n - 1;
	while (s < e) {
		if ((str[s] - '0') ^ (str[e] - '0')) s++, e--;
		else break;
	}
	cout << max(0, n - 2 * s) << endl;
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