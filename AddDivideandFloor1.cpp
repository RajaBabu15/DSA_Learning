#include<bits/stdc++.h>

using namespace std;

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{	ll t;
	cin >> t;
	while (t--) {
		ll a, b, c, cnt = 0, mn = 1e9; cin >> a >> b;
		for (ll i = 0; i < 100; i++, b++)
		{
			cnt = 0; c = a; if (b == 1)continue;
			while (c) {c /= b; cnt++;}
			mn = min(mn, cnt + i);
		}
		cout << mn << "\n";
	}
}

void solve() {

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