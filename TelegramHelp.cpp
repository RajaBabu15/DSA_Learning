#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define fo(i,n) for(ll i=0;i<n;i++)
#define rfo(i,n) for(ll i=n-1;i>=0;i--)
#define inarr(arr, n) for (ll i = 0; i < n; i++) cin>>arr[i]
#define in(n) ll n;cin>>n
#define inn(n,k) ll n,k;cin>>n>>k
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define on(n) cout<<n<<endl
#define all(x) x.begin(), x.end()
#define fi(l, r) for(ll i=l;i<r;i++)
#define fj(l, r) for(ll j=l;j<r;j++)
#define fir(r, l) for(ll i=r;i>=l;i--)
#define fjr(r, l) for(ll j=r;j>=l;j--)
#define eb emplace_back
// rotate(v.begin(),v.begin()+v.size()-r,v.end()); for rotating vector r times right
// rotate(v.begin(),v.begin()+r,v.end()); for rotating vector r times left
const ll inf = 1e18;
const ll N = 1e6 + 5;
// const ll MOD=1e9+7;
const ll MOD = 998244353;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
typedef map<ll, ll> mll;
void solve() {
	inn(n, k);
	vll v(n + 1);
	for (ll i = 1; i <= n; i++) {
		v[i] = i;
	}
	ll z = -1, nm = -1;
	ll flag = 0;
	for (ll i = 1; i <= n - 1; i++) {
		if (k % i == 0 && (k / i) % 2 == 0 && (k / i) / 2 <= (n) / 2) {
			flag = 1;
			z = i;
			nm = (k / i) / 2;
			break;
		}
	}
	if (flag) {
		cout << "Yes\n";
		for (ll i = 1; i <= n; i++) {
			if (v[i] == i && nm > 0) {
				swap(v[i], v[i + z]);
				nm--;
			}
		}
		for (ll i = 1; i <= n; i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
	}
	else {
		cout << "No\n";
	}

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ll t;
	cin >> t;
	while (t--) {
		solve();
	}
}