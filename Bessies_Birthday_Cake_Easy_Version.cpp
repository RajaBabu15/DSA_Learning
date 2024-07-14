#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, x, y; cin >> n >> x >> y;
	vector<int> vec(x);
	set<int> s; for (int i = 0, ele; i < x && cin >> ele; i++) s.insert(ele - 1), vec[i] = ele - 1;
	int cnt = 0;
	for (int i = 0; i < x; i++) {
		if (s.find((vec[i] + 1) % n) == s.end() && s.find((vec[i] + 2) % n) != s.end())
			cnt++;
	}
	cnt += x - 2;
	cout << cnt << endl;
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