#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (auto &ele : vec) cin >> ele;
	sort(vec.begin(), vec.end());
	int s = 0, e = n - 1; long long sum = 0;
	vector<int> v2;
	while (s <= e) {
		if (sum != vec[s])
			v2.push_back(vec[s]), sum += vec[s++];
		else v2.push_back(vec[e]), sum += vec[e--];
	}
	sum = 0ll;
	bool flag = false;
	for (int i = 0; i < n; i++) {
		if (sum == v2[i]) {flag = true; break;}
		else sum += v2[i];
	}
	if (!flag) {cout << "YES" << endl; for (auto &ele : v2) cout << ele << " "; cout << endl; return;}
	s = 0, e = n - 1; sum = 0;
	v2.clear();
	while (s <= e) {
		if (sum != vec[e])
			v2.push_back(vec[e]), sum += vec[e--];
		else v2.push_back(vec[s]), sum += vec[s++];
	}
	sum = 0ll;
	flag = false;
	for (int i = 0; i < n; i++) {
		if (sum == v2[i]) {flag = true; break;}
		else sum += v2[i];
	}
	if (!flag) {cout << "YES" << endl; for (auto &ele : v2) cout << ele << " "; cout << endl; return;}
	else cout << "NO" << endl;
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