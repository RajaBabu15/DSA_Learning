#include<bits/stdc++.h>

using namespace std;

const int N = 100000;
vector<vector<int>> divisors;

void SieveofEratosthenes() {
	divisors.resize(N + 1, vector<int>());
	for (int i = 1; i <= N; i++) {
		for (int j = i; j <= N; j += i) divisors[j].push_back(i);
	}
}


void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	vector<int> dp(n, 1);

	//state dp[i]=maximum number of models that he can buy , must buy the model at the index i
	for (int i = 0; i < n; i++) {
		for (auto &ele : divisors[i + 1]) if (ele < i + 1 && vec[ele - 1] < vec[i]) dp[i] = max(dp[i], dp[ele - 1] + 1);
	}
	cout << *max_element(dp.begin(), dp.end()) << endl;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	SieveofEratosthenes();
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}