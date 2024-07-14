#include<bits/stdc++.h>

using namespace std;


#define int long long

vector<int> vec = {11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111, 11111111111};

bool divi(int n, int ind) { // to check whether n is divisible by vec[ind] and is if not by any combination of the 0 to ind-1
	if (n == 0) return true;
	else if (ind == 0) return n % vec[ind] == 0;
	bool f1 = divi(n % vec[ind], ind - 1);
	if (f1) return f1;
	bool f2 = divi(n, ind - 1);
	return f2;
}

void solve() {
	int n; cin >> n;
	int sz = (int) vec.size();
	if (divi(n, sz - 1)) cout << "YES" << endl;
	else cout << "NO" << endl;
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