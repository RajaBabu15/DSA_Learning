#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, x, y; cin >> n >> x >> y;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	vector<pair<int, int>> red(n);
	for (int i = 0; i < n; i++) red[i] = {vec[i] % x, vec[i]};
	sort(red.begin(), red.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
		return a.first < b.first;
	});
	for (auto &[a, b] : red) cout << "{" << a << "," << b << "} "; cout << endl;
	vector<pair<int, int>> tmp;
	int f = 0, e = n - 1, count = 0;
	while (f < e) {
		for (int i = e; i > f; i--) {
			if ((red[f].first + red[i].first) % x == 0) {
				if (abs(red[f].second - red[i].second) % y == 0) {
					count++;
					cout << "{" << red[f].first << "," << red[f].second << "},{" << red[i].first << "," << red[i].second << "}" << endl;
				}
			}
			else break;
		}
		f++;
	}
	cout << count << endl;
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