#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	string a = "", c = "";
	for (int i = 0; i < n; i++) {
		if (i & 1) {a += ".."; c += "##";}
		else {c += ".."; a += "##";}
	}
		for (int i = 0; i < n; i++) if (i & 1) cout << c << endl << c << endl; else cout << a << endl << a << endl;
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