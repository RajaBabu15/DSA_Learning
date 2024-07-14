#include<bits/stdc++.h>

using namespace std;

void solve() {
	string str; cin >> str;
	int n = str.length();
	if (n & 1) {cout << "0" << endl; return;}
	int ans = 0;

	for (int i = 0; i < n; i ++) {
		string a = str.substr(0, i);
		string b = str.substr(i);
		string ar = a, br = b;
		reverse(ar.begin(), ar.end());
		reverse(br.begin(), br.end());
		if (a == ar && b == br && (a.size() % 2 == 0 &&  b.size() % 2 == 0) || a == b  ) ans++;

	}
	cout << ans << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t ; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}