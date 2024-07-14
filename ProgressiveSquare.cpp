#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, c, d; cin >> n >> c >> d;
	int a11 = INT_MAX;
	vector<int> vec(n * n); for (auto &ele : vec) cin >> ele, a11 = min(a11, ele);
	vector<int> vec2(n * n); int ind = 0;
	for (int i = 0; i < n; i++) {
		int f = a11 + i * c; vec2[ind++] = f;
		for (int j = 1; j < n; j++) {
			vec2[ind++] = f + j * d;
		}
	}
	sort(vec2.begin(), vec2.end());
	sort(vec.begin(), vec.end());
	int va = n * n;
	for (int i = 0; i < va; i++) {
		if (vec[i] != vec2[i]) {cout << "NO" << endl; return;}
	}
	cout << "YES" << endl;
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