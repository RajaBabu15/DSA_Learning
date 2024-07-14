#include<bits/stdc++.h>

using namespace std;

struct triplet {
	int x, y, gcd;
};

triplet extendedGCD(int a, int b) {
	if (b == 0) {
		triplet ans;
		ans.x = 1;
		ans.y = 0;
		ans.gcd = a;
		return ans;
	}
	triplet smallAnswer = extendedGCD(b, a % b);
	triplet ans;
	ans.x = smallAnswer.y;
	ans.y = smallAnswer.x - (a / b) * smallAnswer.y;
	ans.gcd = smallAnswer.gcd;
	return ans;
}

void solve() {
	long long n, k;
	cin >> n >> k;
	if (!(n & 1ll)) {cout << "YES" << endl; return ;}
	else if (!((n - k) & 1ll)) {cout << "YES" << endl; return;}
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