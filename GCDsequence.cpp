#include<bits/stdc++.h>

using namespace std;

bool check(const vector<int> &vec, int ind, int n) {
	vector<int> tmp(n - 1); for (int i = 0, ii = 0; i < n; i++) if (i != ind) tmp[ii++] = vec[i];
	vector<int> bdtmp(n - 2); for (int i = 0; i < n - 2; i++) bdtmp[i] = gcd(tmp[i], tmp[i + 1]);
	for (int i = 0; i < n - 3; i++) if (bdtmp[i] > bdtmp[i + 1]) return false;
	return true;
}

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	vector<int> b(n - 1);
	for (int i = 0; i < n - 1; i++) b[i] = gcd(vec[i], vec[i + 1]);
	bool flag = false; int ind = -1;
	for (int i = 1; i < n - 1; i++) if (b[i - 1] > b[i]) {flag = true, ind = i ; break;}
	if (!flag) {cout << "YES" << endl; return;}
	if (check(vec, ind - 1, n) || check(vec, ind, n) || check(vec, ind + 1, n)) {cout << "YES" << endl; return;}
	cout << "NO" << endl;
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