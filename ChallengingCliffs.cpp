#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	sort(vec.begin(), vec.end());
	int ind = 0, diff = vec[1] - vec[0];
	for (int i = 0; i < n - 1; i++) { if (vec[i + 1] - vec[i] < diff) { diff = vec[i + 1] - vec[i], ind = i;}}
	if (n == 2) {cout << vec[0] << " " << vec[1] << endl; return;}
	reverse(vec.begin(), vec.begin() + ind + 1);
	reverse(vec.begin() + ind + 1, vec.end());
	reverse(vec.begin(), vec.end());
	for (auto &ele : vec) cout << ele << " "; cout << endl;
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