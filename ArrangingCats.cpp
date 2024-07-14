#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	string s1, s2; cin >> s1 >> s2;
	int c1 = 0, c2 = 0;
	for (int i = 0; i < n; i++) {
		if (s1[i] == s2[i]) continue;
		if (s1[i] == '1') c1++;
		if (s2[i] == '1') c2++;
	}
	cout << max(c1, c2) << endl;

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