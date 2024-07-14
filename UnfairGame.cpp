#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007

void solve() {
	int dkl1, dkl2, dkl3, dkl4;
	cin >> dkl1 >> dkl2 >> dkl3 >> dkl4;
	int dkl5 = 0, dkl6 = 0;
	dkl5 += (dkl1 / 2);
	dkl5 += (dkl2 / 2);
	dkl5 += (dkl3 / 2);
	dkl5 += (dkl4 / 2);
	if (dkl1 && dkl2 && dkl3) {
		dkl6 += ((dkl1 + 1) / 2);
		dkl6 += ((dkl2 + 1) / 2);
		dkl6 += ((dkl3 + 1) / 2);
		dkl6 -= 2;
		dkl6 += (dkl4 / 2);
	}
	dkl5 = max(dkl5, dkl6);
	cout << dkl5 << endl;
}
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}