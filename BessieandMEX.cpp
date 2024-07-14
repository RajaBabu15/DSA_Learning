#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n), ans(n); for (auto &ele : a) cin >> ele;
	// set<int> s; for (int i = 0; i <= n; i++) s.insert(i);
	// for (int i = 0; i < n; i++) {
	// 	if (a[i] >= 0) {
	// 		ans[i] = *s.begin();
	// 		s.erase(s.begin());
	// 	}
	// 	else {
	// 		int x = *s.begin() - a[i];
	// 		ans[i] = x;
	// 		s.erase(x);
	// 	}
	// }
	// for (auto &ele : ans) cout << ele << " "; cout << endl;



	int smallestAvailable = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] >= 0) {
			ans[i] = smallestAvailable;
			++smallestAvailable;
		} else {
			int x = smallestAvailable - a[i];
			ans[i] = x;
			if (x == smallestAvailable) {  // If x was the smallest available, move to the next available
				++smallestAvailable;
			}
		}
	}

	for (int ele : ans) cout << ele << " ";
	cout << endl;
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