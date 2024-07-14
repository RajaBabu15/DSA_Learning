#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (auto &ele : vec) cin >> ele;
	int ch1 = -1, ch2 = -1;
	int count1 = 0, count2 = 0;
	for (int i = 0; i < n; i++) {
		if (ch1 == -1) ch1 = vec[i], count1 = 1;
		else if (vec[i] == ch1) count1++;
		else if (ch2 == -1) ch2 = vec[i], count2 = 1;
		else if (vec[i] == ch2) count2++;
		else {cout << "NO" << endl; return;}
	}
	if (count1 < count2) swap(count1, count2);
	if ((count1 == n) || (count1 == ceil(1.0 * n / 2) && count2 == floor(1.0 * n / 2))) cout << "YES" << endl;
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