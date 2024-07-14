#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (auto &ele : vec) cin >> ele;
	int mx = *max_element(vec.begin(), vec.end());
	int c = count_if(vec.begin(), vec.end(), [&](const int& x) {return x == mx;});
	if (c == n) cout << -1 << endl;
	else {
		cout << n - c << " " << c << endl;
		for (auto &ele : vec) {if (ele != mx) cout << ele << " ";}
		cout << endl;
		for (int i = 0; i < c; i++) cout << mx << " ";
		cout << endl;
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