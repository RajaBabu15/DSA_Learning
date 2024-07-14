#include<bits/stdc++.h>

using namespace std;

void solve() {
	map<char, int> mp;  mp['C'] = 0,  mp['D'] = 1,  mp['H'] = 2,  mp['S'] = 3;
	map<int, char> rmp; rmp[0] = 'C', rmp[1] = 'D', rmp[2] = 'H', rmp[3] = 'S';
	int n; cin >> n;
	char trump_card_char; cin >> trump_card_char; int tr = mp[trump_card_char];
	vector<vector<int>> vec(4);
	string tmp;
	for (int i = 0; i < 2 * n; i++) {
		cin >> tmp;
		vec[mp[tmp[1]]].push_back(tmp[0] - '0');
	}
	for (auto &ele : vec) sort(ele.begin(), ele.end());
	vector<int> iter1; for (int i = 0; i < 4; i++) if (i != tr) iter1.push_back(i);
	int used = 0, usz = vec[tr].size();
	vector<string> ans(n, ""); int cnt = 0;
	for (int i = 0; i < 3; i++) {
		int ind = iter1[i], sz = (int)vec[ind].size();
		for (int j = 0; j < sz; j += 2) {
			if (j + 1 < sz) ans[cnt++] = to_string(vec[ind][j]) + rmp[ind] + " " + to_string(vec[ind][j + 1]) + rmp[ind] ;
			else if (used < usz ) ans[cnt++] = to_string(vec[ind][j]) + rmp[ind] + " " + to_string(vec[tr][used]) + trump_card_char, used++;
			else {cout << "IMPOSSIBLE" << endl; return;}
		}
	}
	for (; used < usz; used += 2) {
		if (used + 1 < usz) ans[cnt++] = to_string(vec[tr][used]) + trump_card_char + " " + to_string(vec[tr][used + 1]) + trump_card_char ;
		else {cout << "IMPOSSIBLE" << endl; return; }
	}
	for (auto &ele : ans) cout << ele << endl;
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