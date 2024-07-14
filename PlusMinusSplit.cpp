#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	char ch = '\0';
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (ch == '\0') {
			ch = str[i];
			count = 1;
		}
		else if (str[i] == ch) {
			count++;
		}
		else { count--;}
		if (count == 0) ch = '\0';
	}
	cout << count << endl;
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
