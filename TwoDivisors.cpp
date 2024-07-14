#include<bits/stdc++.h>

using namespace std;


void solve() {
	long long a, b;
	cin >> a >> b;
	long long l = lcm(a, b);
	if (l == b) cout << b*b / a << endl;
	else cout << l << endl;

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