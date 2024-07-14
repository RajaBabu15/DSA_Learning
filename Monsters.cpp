#include<bits/stdc++.h>
using namespace std;

#define int long long
// struct Compare {
// 	bool operator()(const pair<int, int> &a, const pair<int, int> &b) {
// 		return a.second == b.second ? a.first > b.first : a.second < b.second;
// 	}
// };

// void solve() {
// 	int n, k; cin >> n >> k;
// 	priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
// 	for (int i = 1, ele; i <= n && cin >> ele ; i++) {pq.push({i, ele});}
// 	while (!pq.empty()) {
// 		if (pq.top().second - k <= 0) {cout << pq.top().first << " "; pq.pop(); }
// 		else {pair<int, int> p = pq.top(); pq.pop(); pq.push({p.first, p.second - k});}
// 	}
// 	cout << endl;
// }

void solve() {
	int n, k; cin >> n >> k;
	vector<pair<int, int>> vec(n); for (int i = 0; i < n; i++) {
		cin >> vec[i].first;
		vec[i].first %= k;
		if (vec[i].first == 0) vec[i].first = k;
		vec[i].second = i + 1;
	}
	sort(vec.begin(), vec.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
		return a.first == b.first ? a.second < b.second : a.first > b.first;
	});
	for (auto &ele : vec) {
		cout << ele.second << " ";
	}
	cout << endl;
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