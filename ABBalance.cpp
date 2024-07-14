#include<bits/stdc++.h>

using namespace std;

void solve() {
	string str;
	cin >> str;
	int n = str.size(); bool a = false, b = false;
	for (int i = 0; i < n ; i++) {
		if (!a && str[i] == 'a') a = true;
		if (!b && str[i] == 'b') b = true;
	}
	if (!a || !b) cout << str << endl;
	else if ( str[0] != str[n - 1]) {
		str[n - 1] = str[0];
		cout << str << endl;
	}
	else cout << str << endl;
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