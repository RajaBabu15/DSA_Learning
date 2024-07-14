#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, cnt = 0;
	cin >> n;
	long long a[n];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = a[i] - (i % a[i]); j <= n; j = j + a[i]) {
			if (i > j && a[i]*a[j] == i + j)
				cnt++;
		}
	}
	cout << cnt << endl;
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