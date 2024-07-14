#include<bits/stdc++.h>

using namespace std;

void solve() {
	string str; cin >> str;
	int k; cin >> k;
	vector<int> vec;
	int n = (int)str.size();
	char ch = '1'; int count = 0;
	for (int i = 0; i < n; i++) {
		if (str[i] == ch) count++;
		else {
			vec.push_back(count);
			ch = str[i], count = 1;
		}
	}
	for (auto &ele : vec) cout << ele << " "; cout << endl;
	int mx = INT_MIN;
	for (int i = 0; i < (int)vec.size(); i += 2) {
		int c = vec[i];
		int tmp = k;
		for (int j = i + 1; j < n ; j++) {
			if (tmp <= 0) break;
			if (j & 1) {
				if (tmp - vec[j] >= 0) c += vec[j], tmp -= vec[j], mx = max(mx, c);
				else c += tmp; tmp = 0, mx = max(mx, c);
			}
			else  c += vec[j];
		}
	}
	cout << mx << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t = 1;
	while (t--) {
		solve();
	}
	return 0;
}