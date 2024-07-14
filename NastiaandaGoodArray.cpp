#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int p = 1000000007, p1 = 1000000009;
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	vector<tuple<int, int, int, int>> tuples;
	for (int i = 0; i < n - 1; i++) {
		if (vec[i] <= vec[i + 1]) {
			tuples.push_back(make_tuple(i + 1, i + 2, vec[i], p));
			vec[i + 1] = p;
		}
		else if (vec[i] > vec[i + 1] && vec[i] != p) {
			if (i - 1 >= 0 && vec[i - 1] != p)
				tuples.push_back(make_tuple(i + 1, i + 2, p, vec[i + 1])), vec[i] = p;
			else tuples.push_back(make_tuple(i + 1, i + 2, p1, vec[i + 1])), vec[i] = p1;

		}
	}
	cout << tuples.size() << "\n";
	for (const auto &t : tuples) {
		cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << " " << get<3>(t) << "\n";
	}
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
