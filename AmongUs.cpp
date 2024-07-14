#include<bits/stdc++.h>

using namespace std;


void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	int im = vec[0], tmp;
	int c = 1;
	for (int i = 1; i < n; i++) {
		if (vec[i] == im) c++;
		else tmp = i + 1;
	}
	if (c == 1) cout << 1 << endl;
	else cout << tmp << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t = 1;
	while (t--) {
		solve();
	}
	return 0;
}