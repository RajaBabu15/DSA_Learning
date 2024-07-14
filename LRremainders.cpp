#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, m; cin >> n >> m;
	if (n == 1) {
		cin >> n; string str; cin >> str;
		cout << (n % m) << endl;
	}
	else {
		vector<int> vec(n);
		for (auto &ele : vec) {
			cin >> ele; ele %= m;
		}

		string cmd;
		cin >> cmd;

		int l = 0, r = n - 1;
		for (auto &ele : cmd) {
			if (ele == 'L')
				l++;
			else
				r--;
		}
		l = max(0, l - 1);
		r = min(n - 1, r + 1);


		vector<int> ans;

		reverse(cmd.begin(), cmd.end());

		int push_val = 1;
		for (auto &ele : cmd) {
			if (ele == 'L') {
				push_val = (push_val * vec[l--]) % m;
				ans.push_back(push_val);
			}
			else {
				push_val = (push_val * vec[r++]) % m;
				ans.push_back(push_val);
			}
		}
		reverse(ans.begin(), ans.end());

		for (auto &ele : ans) {
			cout << ele << " ";
		}
		cout << endl;
	}
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