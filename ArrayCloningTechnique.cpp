#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (auto &ele : vec) cin >> ele;
	sort(vec.begin(), vec.end());
	int ele = INT_MIN, c = 0, mxc = c;
	for (int i = 0; i < n; i++) {
		if (vec[i] == ele) c++, mxc = max(mxc, c);
		else ele = vec[i], c = 1, mxc = max(mxc, c);
	}
	int op =  (n - mxc); int var = mxc;
	while (n > mxc) {
		op++;
		mxc += var;
		var *= 2;
	}
	cout << op << endl;
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