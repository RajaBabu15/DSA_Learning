#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, a, b; cin >> n >> a >> b;
	int price = 0;
	if ((a << 1) - b <= 0) price += n * a, n = 0;
	else price +=  n / 2 * b, n %= 2;
	price += n * a;
	cout << price << endl;
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