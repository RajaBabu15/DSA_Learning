#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, r, b; cin >> n >> r >> b;
	string ans = string(n, 'R');
	int t = ceil(1.0 * n / (b + 1)) - 1, c = 0;
	for (int i = t; i < n; i += (t + 1)) ans[i] = 'B', c++;
	for (int i = n - 1; i >= 0 && c > b; i--) if (ans[i] == 'B' ) ans[i] = 'R', c--;
	for (int i = 1; c < b && i < n ; i++) if (ans[i] == 'R' && ans[i - 1] != 'B') ans[i] = 'B', c++;
	cout << ans << endl;

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