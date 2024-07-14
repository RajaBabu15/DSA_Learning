#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (auto &ele : vec) cin >> ele;
	int s = 0;
	for (; s < n && vec[s] == 0; s++);
	int e = n - 1;
	for (; e >= 0 && vec[e] == 0; e--);
	int count = 0;
	for (; s <= e; s++) if (vec[s] == 0) count++;
	cout << max(0, count) << endl;
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