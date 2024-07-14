#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, f, k; cin >> n >> f >> k;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	int h = vec[f - 1];
	bool fl = false;
	sort(vec.rbegin(), vec.rend());
	for (int i = 0; i < k; i++) if (vec[i] == h) {fl = true; break;}
	if (!fl) {cout << "NO" << endl; return;}
	fl = false;
	for (int i = k; i < n; i++) if (vec[i] == h) {fl = true; break;}
	if (!fl) {cout << "YES" << endl; return;}
	cout << "MAYBE" << endl;

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