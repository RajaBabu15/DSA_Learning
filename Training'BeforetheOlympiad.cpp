#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (auto &ele : vec) cin >> ele;
	long long sum = 0ll;
	int odd = 0;
	for (int i = 0; i < n; i++) {
		sum += vec[i];
		odd += (vec[i] & 1);

		if (i == 0) cout << sum << " ";
		else cout << sum - (odd / 3) - (odd % 3 == 1) << " ";
	}
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