#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	int mx = INT_MIN, count = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		if (str[i] == '#') sum += count, count = 0;
		else count++, mx = max(mx, count);
	}
	sum += count;
	if (mx < 3) cout << sum << endl;
	else cout << 2 << endl;
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