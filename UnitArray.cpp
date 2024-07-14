#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int c = 0, op = 0;
	for (int i = 0, ele; i < n; i++) cin >> ele, c += ele < 0;
	int c1 = n - c, sum = c1 - c;
	if (sum < 0) {
		sum = abs(sum);
		if (sum & 1) {
			op += (sum / 2) + 1;
			c -= sum / 2 + 1;
		}
		else {
			op += (sum / 2);
			c -= sum / 2;
		}
	}
	if (c & 1) op += 1;
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