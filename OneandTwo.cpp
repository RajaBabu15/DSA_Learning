#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long n, c2 = 0ll;
	cin >> n;
	vector<long long> vec(n);
	for (auto &ele : vec) cin >> ele, c2 += (ele == 2);
	if (c2 & 1) cout << -1 << endl;
	else {
		int count = 0;
		if (c2 == 0) {cout << 1 << endl; return;}
		for (long long i = 0; i < n; i++) {
			if (vec[i] == 2) count++;
			if (count == c2 / 2) {cout << i + 1 << endl; return;}
		}
	}

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