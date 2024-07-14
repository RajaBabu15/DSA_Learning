#include<bits/stdc++.h>

using namespace std;

vector<int> lds(vector<int>& arr) {
	int n = arr.size();
	vector<int> len(n, 1);
	vector<int> prev(n, -1);
	int max_len = 1;
	int max_index = 0;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j] && len[j] + 1 > len[i]) {
				len[i] = len[j] + 1;
				prev[i] = j;
			}
		}
		if (len[i] > max_len) {
			max_len = len[i];
			max_index = i;
		}
	}
	vector<int> locations;
	int curr = max_index;
	while (curr != -1) {
		locations.push_back(curr);
		curr = prev[curr];
	}
	reverse(locations.begin(), locations.end());
	return locations;
}

vector<int> remove_by_indexes(const vector<int>& vec, const vector<int>& indexes) {
	vector<int> result = vec;
	vector<int> sorted_indexes = indexes;
	sort(sorted_indexes.rbegin(), sorted_indexes.rend());
	for (int index : sorted_indexes) {
		result.erase(result.begin() + index);
	}
	return result;
}

void solve() {
	int n, count = 0;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) cin >> vec[i];
	vector<int> ids = lds(vec);
	vector<int> vec1 = remove_by_indexes(vec, ids);
	for (int i = 0; i < (int)vec1.size() - 1; i++) {
		if (vec1[i] < vec1[i + 1]) {
			count++;
		}
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