#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, a, b; cin >> n >> a >> b;
	double c = b / 2.0;
	if (a < c) {cout << n*a << endl; return;}
	else {
		int t = n / 2;
		cout << t*b + (n & 1)*a << endl;
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