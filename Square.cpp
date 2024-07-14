#include<bits/stdc++.h>

using namespace std;

void solve() {
	int mnx = INT_MAX, mxx = INT_MIN, mny = INT_MAX, mxy = INT_MIN;
	for (int i = 0, e1, e2; i < 4 && cin >> e1 >> e2; i++) mnx = min(mnx, e1), mxx = max(mxx, e1), mny = min(mny, e2), mxy = max(mxy, e2);
	cout << abs(mxx - mnx)*abs(mxy - mny) << endl;
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