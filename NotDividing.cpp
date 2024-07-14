#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n);
	for (auto &ele : vec) (cin >> ele), ele = max(2, ele);
	for (int i = 0; i < n - 1; i++) {
		if (vec[i + 1] % vec[i] == 0) vec[i + 1]++;
	}
	for (auto &ele : vec) cout << ele << " ";
	cout << endl;
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