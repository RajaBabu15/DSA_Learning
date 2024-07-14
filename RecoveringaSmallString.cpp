#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	string str = "aaa";
	n -= 3;
	for (int i = 2; i >= 0 && n > 0; i--) {
		if (n >= 25) str[i] = str[i] + 25, n -= 25;
		else str[i] = str[i] + n, n = 0;
	}
	cout << str << endl;
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