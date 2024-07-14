#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	if (vec[1] != vec[n - 1]) {cout << "YES\nB"; for (int i = 1; i < n; i++) cout << "R"; cout << endl;}
	else if (vec[0] != vec[n - 2]) {cout << "YES" << endl; for (int i = 0; i < n - 1; i++) cout << "R"; cout << "B\n";}
	else cout << "NO" << endl;
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