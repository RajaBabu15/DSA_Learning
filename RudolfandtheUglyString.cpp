#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	string str; cin >> str;
	string ans = "";
	for (int i = 0; i < n; i++) {
		if (i < n - 2 && str.substr(i, 3) == "map") ans += "mp", i += 2;
		else if (i < n - 2 && str.substr(i, 3) == "pie") ans += "pe", i += 2;
		else ans += str[i];
	}
	cout << str.length() - ans.length() << endl;
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