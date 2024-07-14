#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MOD 1000000007
#define MOD2 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#ifdef painless_147
#define debug(x) cerr << #x <<" "; _print(x); cerr<<endl;
#else
#define debug(x)
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

template <typename T> void _print(T t) {cerr << t;}
template <class T, class V> void _print(pair    <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss);  cerr << "}"; cerr << endl;} //_print(p  );
template <class T         > void _print(vector  <T  > v) {cerr << "["; for (T i : v)     {_print(i); cerr << " ";}  cerr << "]"; cerr << endl;} //_print(vec);
template <class T         > void _print(set     <T  > v) {cerr << "["; for (T i : v)     {_print(i); cerr << " ";}  cerr << "]"; cerr << endl;} //_print(st );
template <class T, class V> void _print(map     <T, V> v) {cerr << "["; for (auto i : v) {_print(i); cerr << " ";}  cerr << "]"; cerr << endl;} //_print(mp );
template <class T, class V> void _print(multimap<T, V> v) {cerr << "["; for (auto i : v) {_print(i); cerr << " ";}  cerr << "]"; cerr << endl;;} //_print(mmp);

ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) { ll res = 1 ; while (b > 0) {if (b & 1 ) res = (res * a) % mod; a = (a * a) % mod; b >>= 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) { ll arr[3]; extendgcd(a, b, arr); return arr[0]; }
ll mminvprime(ll a, ll b) {	return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
vector<ll> sieve(int n) {int *arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++) if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i) arr[j] = 1;} delete [] arr; return vect;}
ll mod_add(ll a, ll b, ll m) {a %= m; b %= m; return (((a + b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a %= m; b %= m; return (((a - b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a %= m; b %= m; return (((a * b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a %= m; b %= m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;} // only for prime m;
long long phin(long long n) { long long num = n; if (n % 2 == 0) { num /= 2; while (n % 2 == 0) n /= 2; } for (long long i = 3; i * i <= n; i += 2) { if (n % i == 0) { while (n % i == 0) n /= i; num = num / i * (i - 1); } } if (n > 1) num = num / n * (n - 1); return num; } //The code you provided is a function for calculating the Euler’s Totient function (also known as phi function) of a number n. The phi function is used in number theory and represents the count of numbers that are less than n and are coprime with n.
//accmulate(arr,arr+n,sum(0ll),myfun) //sum all the element in the arr
//partial_sum(arr,arr+n,brr) //brr={a0,a0+a1,a0+a1+a2,.....}

void solve() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n, 0);
		for (int i = 0; i < n; i++) cin >> arr[i];
		ll ans = -1e18, sum = 0;
		for (int i = 0; i < n; i++) {
			sum += arr[i];
			ans = max(ans, sum);
			if (i < n  && max(arr[i], -arr[i]) % 2 == max(arr[i + 1], -arr[i + 1]) % 2) sum = 0;
			if (sum < 0) sum = 0;

		}
		cout << ans << endl;
	}

}

int main() {
#ifdef painless_147
	freopen("Error.txt", "w", stderr);
#endif
	fastio();
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	auto start1 = high_resolution_clock::now();
	solve();
	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef painless_147
	cerr << "Time:" << duration.count() / 1000 << endl;
#endif
}