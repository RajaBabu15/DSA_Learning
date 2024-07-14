#include <iostream>
#include <vector>
using namespace std;

#define forn(i, a, b) for(int i = (a); i < (b); ++i)

void input(vector<int>& a, int n) {
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
}

void solve() {
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	input(a, n);

	int cow = a[k - 1];
	int index = 0;

	forn(i, 0, n) {
		if (a[i] >= cow) {
			index = i;
			break;
		}
	}

	if (index == k - 1) {
		index = 0;
	}

	swap(a[k - 1], a[index]);

	int ans = 0;

	forn(i, index, n) {
		if (i < n - 1 && a[i] > a[i + 1]) {
			ans++;
			a[i + 1] = a[i];
		} else {
			break;
		}
	}

	if (index != 0) {
		ans++;
	}

	cout << max(ans, index - 1) << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}