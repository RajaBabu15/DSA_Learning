#include<bits/stdc++.h>

using namespace std;

int getCount(long long n, int l, int sl1, int sl2) {
	int count = 0;
	while (n > 0 && n % 10 != l)n /= 10, count++;
	n /= 10;
	while (n > 0 && n % 10 != sl1 && n % 10 != sl2)n /= 10, count++;
	return count;
}

void solve() {
	long long n; cin >> n;
	int c1 = 0, c2 = 0;
	c1 = getCount(n, 5, 2, 7);
	c2 = getCount(n, 0, 0, 5);
	cout << min(c1, c2) << endl;
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
