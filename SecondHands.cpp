#include<bits/stdc++.h>

using namespace std;

void solve() {

	int n, k; cin >> n >> k;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	vector<int> rng(101, 0);
	for (auto &ele : vec) rng[ele]++;
	for (auto &ele : rng) if (ele > 2) {cout << "NO" << endl; return;}
	if ((k << 1) >= n) cout << "YES" << endl;
	else cout << "NO" << endl;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int tt; cin >> tt;
	for (int t = 1; t <= tt; t++) {
		cout << "Case #" << t << ": ";
		solve();
	}
	return 0;
}