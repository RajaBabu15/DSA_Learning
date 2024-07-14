#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> c(n, 0); for (int i = 0, ele; i < n && cin >> ele; i++) c[ele]++;
	int f = 0;
	for (int i = 0; i < n; i++) {
		if (c[i] == 0) {cout << i << endl; return;}
		else if (c[i] == 1) {
			if (f == 0) f++;
			else {cout << i << endl; return;}
		}
	}
	cout << n << endl;
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