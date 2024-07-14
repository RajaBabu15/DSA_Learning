#include<bits/stdc++.h>

using namespace std;

int occ1(string str, int m, int s, char ch) {
	for (; s < m; s++) if (str[s] == ch) break;
	return s;
}

pair<int, int> occ(string str, int m, int s, int k) {
	int i = 0; int mn = 0;
	for (; i < k; i++) {
		mn = max(occ1(str, m, s, 'a' + i), mn);
		if (s == m) break;
		s +
	}
	return {s, i};
}

void solve() {
	int n, k, m; cin >> n >> k >> m;
	string str; cin >> str; int s = 0;
	string ans = string(n, 'a');
	for (int i = 0; i < n; i++) {
		pair<int, int> val = occ(str, m, s, k);
		cout << val.first << val.second << endl;
		if (val.first == m) {cout << "NO" << endl; ans[i] = (char)('a' + val.second); return;}
		s++;
	}
	cout << "YES" << endl;
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