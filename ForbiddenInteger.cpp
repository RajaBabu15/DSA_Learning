#include<bits/stdc++.h>

using namespace std;



void solve() {
	int n, k, x;
	cin >> n >> k >> x;
	if (x != 1) {
		cout << "YES" << endl << n << endl;
		for (int i = 1; i <= n; i++) cout << 1 << " ";
		cout << endl;
	}
	else if (k == 1) {cout << "NO" << endl;}
	else if (k == 2) {
		if (n & 1) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl << n / 2 << endl;
			for (int i = 2; i <= n; i += 2) cout << 2 << " ";
			cout << endl;
		}
	}
	else {
		if (n == 1) cout << "NO" << endl;
		else {
			vector<int> vec;
			while (n != 0) {
				if (n != 3)
					vec.push_back(2), n -= 2;
				else
					vec.push_back(3), n -= 3;
			}
			cout << "YES" << endl;
			cout << vec.size() << endl;
			for (auto &ele : vec) cout << ele << " ";
			cout << endl;
		}
	}

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