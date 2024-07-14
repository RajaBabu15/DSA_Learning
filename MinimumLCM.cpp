#include<bits/stdc++.h>

using namespace std;

#define int long long

int smallestprime(int n) {
	for (int i = 3; i * i <= n; i += 2) {
		if (n % i == 0) return i;
	}
	return n;
}

void solve() {
	int n; cin >> n;
	if (!(n & 1)) cout << (n / 2) << " " << (n / 2) << endl;
	else {
		int sp = smallestprime(n);
		n /= sp;
		cout << n << " " << n*(sp - 1) << endl;
	}
}

signed main() {
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