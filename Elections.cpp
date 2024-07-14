#include<bits/stdc++.h>

using namespace std;

int returnUpperBoundIndices(const std::vector<int>& vec, int value) {
	int indices;
	// Use upper_bound to find the first element greater than 'value'
	auto it = std::lower_bound(vec.begin(), vec.end(), value);

	// Check if the iterator is within the bounds of the vector
	if (it != vec.end()) {
		// Calculate the index from the iterator
		indices = distance(vec.begin(), it);
	} else {
		// If no elements are greater, return an empty vector or some indicator
		indices = -1; // -1 can indicate no such element was found
	}
	return indices;
}

void solve() {
	int n, c; cin >> n >> c;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	vector<int> back(n); back[n - 1] = vec[n - 1];
	for (int i = n - 2; i >= 0; i--) back[i] = max(back[i + 1], vec[i]);
	vector<int> tmp(vec.begin(), vec.end()); sort(tmp.begin(), tmp.end());
	int ct = 0;
	for (auto &ele : tmp) {
		ct += ele;
		ele = ct;
	}
	cout << "R ";
	for (auto &ele : tmp) cout << ele << " "; cout << endl;
	vector<int> ans(n);
	for (int i = 0; i < n; i++) {
		if (c + vec[i] >= back[i]) ans[i] = 0;
		else ans[i] = returnUpperBoundIndices(tmp, back[i] - c - vec[i]);
	}
	for (auto &ele : ans) cout << ele << " "; cout << endl;
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