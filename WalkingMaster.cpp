#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	long long op = 0;
	if (d < b) {cout << -1 << endl; return;}
	else op += d - b, a += op;
	if (a < c) {cout << -1 << endl; return;}
	else op += a - c;
	cout << op << endl;

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