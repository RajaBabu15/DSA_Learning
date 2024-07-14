#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void process(vector<int>& vec, int t, int s) {
	map<int, int> mp; mp.clear(); vector<pair<int, int>> a; vector<int> tmp;
	for (int i = s; i < s + t; ++i) mp[vec[i]]++;
	for (auto const& [key, val] : mp) a.push_back({key, val});
	sort(a.begin(), a.end(), [](const pair<int, int>& a, const pair<int, int>& b) { return a.second < b.second; });
	for (auto &[key, freq] : a) while (freq--) tmp.push_back(key);
	for (int i = 0; i < t; i++) vec[s + i] = tmp[i];
}

void solve() {
	int n, k, t; cin >> n >> k;
	t = n; n <<= 1; k <<= 1;
	vector<int> vec(n); for (auto& ele : vec) cin >> ele;
	sort(vec.begin(), vec.begin() + t); sort(vec.begin() + t, vec.end());
	process(vec, t, 0); process(vec, t, t);
	for (auto &ele : vec) cout << ele << " "; cout << endl;
	vector<int> tmp(vec.begin() + t - k, vec.begin() + t);
	for (auto &ele : tmp) cout << ele << " "; cout << endl;
	tmp.clear(); tmp = vector<int>(vec.end() - k, vec.end());
	for (auto &ele : tmp) cout << ele << " "; cout << endl;
}

void solve1() {
	int n, k; cin >> n >> k;
	vector<int> a(n << 1);
	for (int i = 0; i < (n << 1); i++)
		cin >> a[i];
	vector<int> ans(n), l, r;
	for (int i = 0; i < n; i++)
		ans[a[i] - 1] += 1;
	for (int i = 0; i < n; i++)
		if (ans[i] == 2) l.push_back(i + 1), l.push_back(i + 1);
		else if (ans[i] == 0) r.push_back(i + 1), r.push_back(i + 1);
	for (int i = 0; i < n; i++)
		if (ans[i] == 1) l.push_back(i + 1), r.push_back(i + 1);
	for (int i = 0; i < (2 * k); i++)
		cout << l[i] << " ";
	cout << '\n';
	for (int i = 0; i < (2 * k); i++)
		cout << r[i] << " ";
	cout << '\n';
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		solve1();
	}
	return 0;
}
