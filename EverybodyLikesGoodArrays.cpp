#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (auto &ele : vec) cin >> ele;
	bool lp = (vec[0] & 1); //odd=false,even=true;
	int op = 0;
	for (int i = 1; i < n; i++) {
		if (!(lp & 1) && !(vec[i] & 1)) op++;
		else if (lp & 1 && vec[i] & 1) op++;
		else lp = vec[i] & 1;
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