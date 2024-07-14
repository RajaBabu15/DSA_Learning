#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n == 1) {cout << 1 << endl; return;}
	vector<string> arr = {"169", "196", "961"};
	int i = 0, counter = 0;
	string output = "";
	while (counter < n) {
		if (i > 3 && i % 2 != 1) {
			i++;
			continue;
		}
		output += arr[i % 3][0] + string( i / 3, '0') + arr[i % 3][1] + string(i / 3, '0') + arr[i % 3][2];
		cout << n << " " << output.length() << endl;
		cout << output + string(n - output.length(), '0')  << endl;
		output = "";
		i++;
		counter++;
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