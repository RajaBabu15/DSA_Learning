#include<bits/stdc++.h>

using namespace std;

void solve() {
	std::string s;
	std::cin >> s;
	int hh = std::stoi(s.substr(0, 2));
	std::string period = hh < 12 || hh == 24 ? "AM" : "PM";
	if (hh == 0) {
		hh = 12;
	} else if (hh > 12) {
		hh -= 12;
	}
	printf("%02d:%s %s\n", hh, s.substr(3, 2).c_str(), period.c_str());
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