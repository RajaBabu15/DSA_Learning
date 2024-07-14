#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, k, neg = 0;
	cin >> n >> k;
	vector<int> vec(n);
	for (auto &ele : vec) (cin >> ele), (ele -= k);
	int count_p = count_if(vec.begin(), vec.end(),  { return x > 0; });
	int count_z = count_if(vec.begin(), vec.end(),  { return x == 0; });
	int count_n = count_if(vec.begin(), vec.end(),  { return x < 0; });
	if (count_z == 0) {cout << 0 << endl; return;}
	else if (count_n == n) {
		[&](int &x) { x = -x;}(vec);

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