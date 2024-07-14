#include<bits/stdc++.h>

using namespace std;

void solve() {
	string text, pat;  cin >> text >> pat;
	int m = text.size(), n = pat.size();
	vector<bool> chs(26, false);
	int j = m - 1, i = n - 1;
	for (; i >= 0; i--) {
		if (j < 0) { cout << "NO" << endl; return; }
		bool flag = false;
		for (; j >= 0; j--) {
			if (text[j] == pat[i]) {
				if (chs[text[j] - 'A']) {cout << "NO" << endl; return;}
				chs[text[j] - 'A'] = false;
				flag = true;
				break;
			} else {chs[text[j] - 'A'] = true;}
		}
		if (!flag) break;
		j--;
	}
	if (i < 0) {
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
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