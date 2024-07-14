#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n), b(n), ai(n), bi(n);
	iota(ai.begin(), ai.end(), 0);
	iota(bi.begin(), bi.end(), 0);
	for (int i = 0, ele; i < n && cin >> ele; i++) a[i] = ele;
	for (int i = 0, ele; i < n && cin >> ele; i++) b[i] = ele;
	sort(ai.begin(), ai.end(), [&](const int &x, const int &y) {
		return a[x] < a[y];
	});
	sort(bi.begin(), bi.end(), [&](const int &x, const int &y) {
		return b[x] < b[y];
	});
	vector<int>::reverse_iterator it1 = ai.rbegin();
	vector<int>::reverse_iterator it2 = bi.rbegin();
	vector<int> c(n, false);
	while (it1 != ai.rend() && it2 != bi.rend()) {
		for (; (a[*it2] == 0 || c[*it2]) && it2 != bi.rend(); it2++)cout << 1 << endl;
		if (it2 == bi.rend()) break;
		else a[*it2]--, b[*it2] = 0, c[*it2] = true;

		for (; (b[*it1] == 0 || c[*it1]) && it1 != ai.rend(); it1++)cout << 2 << endl;
		if (it1 == ai.rend()) break;
		else a[*it1] = 0, b[*it1]--, c[*it1] = true;
		it1++, it2++;
	}
	long long ans = 0;
	for (int i = 0; i < n; i++) cout << a[i] << " " << b[i] << endl;
	cout << ans << endl;
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