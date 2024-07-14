#include<bits/stdc++.h>

using namespace std;

int factorPairs(int n) {
	int ans = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			ans++;
			if (i != n / i) ans++;
		}
	}
	return ans;
}

void solve(vector<int> &vec, int l, int r) {
	int op = 0;
	for (int i = l - 1; i <= r - 1; i++) op += vec[i];
	cout << op << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t; cin >> t;
	vector<pair<int, int>> veci; int ar = 1;
	while (t--) {
		int l, r; cin >> l >> r;
		veci.push_back({l, r});
		ar = max(ar, r);
	}
	vector<int> vec(ar + 1);
	int ans = 0;
	for (int i = 0; i < ar + 1; i++) ans += factorPairs(i), vec[i] = ans;
	for (auto &ele : veci) solve(vec, ele.first, ele.second);
	return 0;
}