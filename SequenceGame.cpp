#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, a;
	cin >> n;
	vector<int> vec;
	cin >> a;
	vec.push_back(a);
	for (int i = 1, ele; i < n; i++) {
		cin >> ele;
		if (ele < a) vec.push_back(ele), vec.push_back(ele);
		else vec.push_back(ele);
		a = ele;
	}
	cout << (int)vec.size() << endl;
	for (auto &ele : vec) cout << ele << " ";
	cout << endl;
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