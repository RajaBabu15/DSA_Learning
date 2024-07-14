#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s; int sz = (int)s.size();
	string sc = s;
	reverse(sc.begin(), sc.end());
	if (s <= sc) {cout << s << endl; return;}
	if (n & 1) cout << sc << endl;
	else cout << sc << s << endl;


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