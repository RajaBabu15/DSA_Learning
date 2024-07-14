#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, a;
	cin >> n >> a;
	int d = INT_MAX;
	for (int i = 1, ele; i < n; i++) cin >> ele, d = min(d, ele - a), a = ele;
	int count = ceil((d + 1) / 2.0);
	cout << count << endl;
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