#include<bits/stdc++.h>

using namespace std;
void solve() {
	int n; cin >> n;
	vector<int> vec = {2, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3, 1, 2, 3, 2, 3, 2, 2, 3, 3, 3, 2, 3, 3, 3, 4, 2, 3, 4, 3, 4, 3, 3, 4, 4, 4, 3, 4, 4, 4, 5, 3, 4, 5, 4, 5, 4, 4, 5, 5, 5, 4};
	cout << vec[n % 30] + (n > 30 ? (n - n % 30) / 15 - 1 : 0) << endl;

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