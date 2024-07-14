#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> divisors(2e5 + 1);

void precompute() {
	for (int i = 1; i <= 2e5; i++)
		for (int j = i; j <= 2e5; j += i)
			divisors[j].push_back(i);
}


bool check(string &str, string p, int n, int e) {
	int count = 0;
	for (int i = 0; i < n; i += e) {
		int tmp = 0;
		for (int j = 0; j < e; j++) {
			if (str[i + j] != p[j]) tmp++;
		}
		if (tmp > 1) return false;
		if (tmp > 0) count++;
	}
	if (count < 2) return true;
	else return false;
}

void solve() {
	int n; cin >> n;
	string str; cin >> str;
	string str_rev = str; reverse(str_rev.begin(), str_rev.end());
	vector<int> divs = divisors[n];
	for (auto e : divs) {
		if (check(str, str.substr(0, e), n, e)) {cout <<  e << endl; return;}
		if (check(str_rev, str_rev.substr(0, e), n, e)) {cout << e << endl; return;}
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t; cin >> t;
	precompute();
	while (t--) {
		solve();
	}
	return 0;
}