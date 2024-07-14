#include<bits/stdc++.h>

using namespace std;
int traffic(int n, int m, vector<int> vehicle) {
	// Write your code here.
	vector<int> vec(n, 0);
	vec[0] = vehicle[0];
	for (int i = 1; i < n; i++) {
		vec[i] = vec[i - 1] + vehicle[i];
	}
	int ans = -1;
	for (int i = 1; i <= n; i++) {
		ans = max(ans, min(vec[i - 1] + m, i));
	}
	return ans;
}


void solve() {
	int n, m; cin >> n >> m;
	vector<int> a(n); for (auto &ele : a) cin >> ele;
	int ans = traffic(n, m, a);
	cout << ans << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	auto start = std::chrono::high_resolution_clock::now();
	int t; cin >> t;
	while (t--) {
		solve();
	}
	auto end = chrono::high_resolution_clock::now();
	double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
	time_taken *= 1e-9;
	cout << "Time taken by program is : " << fixed << time_taken << setprecision(9);
	cout << " sec" << endl;
	return 0;
}