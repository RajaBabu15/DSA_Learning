#include<bits/stdc++.h>

using namespace std;

void solve() {
	int a, b, n;
	cin >> a >> b >> n;
	vector<int> vec(n); long long ans = b;
	for (auto & ele : vec) cin >> ele, ans += min(ele, a - 1);
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