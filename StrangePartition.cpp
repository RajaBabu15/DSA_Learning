#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	long long mx = 0, mn = 0; // change the data type of mn and mx to long long
	long long sum = 0ll;
	for (auto &ele : vec) sum += ele, mx += ceil(1.0 * ele / x);
	mn = ceil(1.0 * sum / x);
	cout << mn << " " << mx << endl;
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
