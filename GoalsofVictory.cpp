#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0, ele; i < n - 1; i++) cin >> ele, sum += ele;
	cout << -sum << endl;
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