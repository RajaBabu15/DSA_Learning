#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long n, ele;
	cin >> n;
	vector<string> vec(n, "");
	vector<int> c(64, 0);
	for (int i = 0; i < n; i++) {
		cin >> ele;
		bitset<64> b(ele);
		vec[i] = b.to_string();
		for (int j = 0; j < 64; j++) c[j] += vec[i][j] - '0';
	}

	for (int i = 63; i >= 0; i--) {
		if (c[i] != n && c[i] != 0) {
			cout << (1ll << (63 - i + 1)) << endl;
			break;
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