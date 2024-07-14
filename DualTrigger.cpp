#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	string str; cin >> str;
	int c = 0;
	for (auto &ch : str) if (ch == '1') c++;
	if (c == 2) {
		bool is = false;
		for (int i = 0; i < n - 1; i++) if (str[i] == '1' && str[i + 1] == '1') {is = true; break;}
		if (is) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	else 	if (c & 1) cout << "NO" << endl;
	else cout << "YES" << endl;
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