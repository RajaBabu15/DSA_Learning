#include<bits/stdc++.h>

using namespace std;

void solve(const vector<int> &vec) {
	int n; cin >> n;
	if (vec[n] == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	vector<int> vec(1e5 + 1, 0); vec[1] = 1;
	vector<int> base = {1,
	                    10, 11,
	                    100, 101, 110, 111,
	                    1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111,
	                    10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111
	                   };
	auto func = [&](int start) {
		if (vec[start] == 1) for (auto &e : base) if (start * e <= 1e5) vec[start * e] = 1;
	};
	func(1);
	for (int i = 1; i <= 1e5; i++) func(i);
	int t; cin >> t;
	while (t--) {
		solve(vec);
	}
	return 0;
}