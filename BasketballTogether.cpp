#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, d; cin >> n >> d;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	sort(vec.begin(), vec.end());
	int s = -1, e = n - 1, ans = 0, c = 0;
	while (s < e) {
		if (vec[e] * (c + 1) > d) ans++, c = 0, e--;
		else s++, c++;
	}
	cout << ans << endl;

}

signed main() {
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