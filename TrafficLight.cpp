#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	char ch; cin >> ch;
	string str; cin >> str;
	if (ch == 'g') {cout << 0 << endl; return;}
	bool r = false; int c = 0, mx = INT_MIN;
	for (int i = 0; i < 2 * n; i++) {
		if (!r) {
			if (str[i % n] == ch) r = true;
			else continue;
		}
		else if (str[i % n] == 'g') c++, mx = max(mx, c), c = 0, r = false;
		else c++;
	}
	cout << mx << endl;
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