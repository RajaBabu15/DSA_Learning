#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, d;
	cin >> n >> d;
	long long ans = 0;
	for (int i = 2; i <= n; i++) {

		ans += i + ((i & (i - 1)) == 0 ? 1 : 0);
	}
	cout << ans << endl;
	while (d--) {
		int var; cin >> var;
		cout << (ans - var - ((var & (var - 1)) == 0 ? 1 : 0)) << endl;
	}

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t = 1;
	while (t--) {
		solve();
	}
	return 0;
}