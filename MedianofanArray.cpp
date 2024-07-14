#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	sort(vec.begin(), vec.end());
	int v = vec[ceil(n / 2.0) - 1];
	int a = 1;
	for (int i = ceil(n / 2.0); i < n; i++) {
		if (vec[i] == v) a++;
	}
	cout << a << endl;
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