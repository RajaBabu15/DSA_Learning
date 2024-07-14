#include<bits/stdc++.h>

using namespace std;


pair<int, int> closestSum(vector<int> &vec, int x) {
	// your code goes here
	int s = 0, e = vec.size() - 1;
	pair<int, int> ans; int diff = INT_MAX;
	while (s < e) {
		int cs = vec[s] + vec[e];
		if (abs(cs - x) < diff) diff = abs(cs - x), ans = {vec[s], vec[e]};
		if (cs <= x) s++; else e--;
	}
	return ans;
}

void solve() {
	vector<int> vec = {10, 22, 28, 29, 30, 40}; int x = 54;
	auto ans = closestSum(vec, x);
	cout << ans.first << " " << ans.second << endl;

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