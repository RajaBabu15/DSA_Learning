#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	int c = 1, mx = 1;
	for (int i = 1; i < n; i++) {
		if (str[i] == str[i - 1]) c++, mx = max(mx, c);
		else c = 1;
	}
	cout << mx + 1 << endl;
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