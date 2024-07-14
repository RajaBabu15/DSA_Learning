#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) vec[i] = i;
	int i = 0;
	for (; i < 32; i++) if ((1 << i) > n - 1) break;
	i--;
	int t = 1 << i;
	for (int j = 0; j < t - 1; j++) swap(vec[j], vec[j + 1]);
	for (auto &ele : vec) cout << ele << " "; cout << endl;
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