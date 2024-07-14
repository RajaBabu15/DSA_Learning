#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
	ll n, x, y;
	cin >> n >> x >> y;
	ll n1 = n / x;
	ll n2 = n / y;
	ll n3 = n / (x * y / __gcd(x, y));
	ll nx = n1 - n3, ny = n2 - n3;
	ll sm1 = ((n + (n - (nx - 1))) * (n - (n - (nx - 1)) + 1)) / 2;
	ll sm2 = (ny * (ny + 1)) / 2;
	cout << sm1 - sm2 << endl;
}

int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}