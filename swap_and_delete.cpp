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

template <typename T            > void get_input(T& t               ) { cin >> t; }
template <typename T            > void get_input(vector<T>& v, int n) { v.resize(n); for (T& i : v) cin >> i; } //vector<int> v;  get_input(v, n);
template <typename T, typename U> void get_input(pair<T, U>& p      ) { cin >> p.first >> p.second; } //pair<int, int> p; get_input(p);
template <typename T            > void get_input(vector<vector<T>>& v, int n, int m) { v.resize(n, vector<T>(m)); for (auto& i : v) for (T& j : i) cin >> j; } //pair<int, int> p; get_input(p);


template <typename T      > void _print(T t             ) {cerr << t;}
template <class T, class V> void _print(pair    <T, V> p) {cerr << "{"; _print(p.ff);      cerr << ","; _print(p.ss); cerr << "}"; cerr << endl;} //_print(p  );
template <class T         > void _print(vector  <T   > v) {cerr << "["; for (T i : v)     {_print(i); cerr << " ";}  cerr << "]"; cerr << endl;} //_print(vec);
template <class T         > void _print(set     <T   > v) {cerr << "["; for (T i : v)     {_print(i); cerr << " ";}  cerr << "]"; cerr << endl;} //_print(st );
template <class T, class V> void _print(map     <T, V> v) {cerr << "["; for (auto i : v)  {_print(i); cerr << " ";}  cerr << "]"; cerr << endl;} //_print(mp );
template <class T, class V> void _print(multimap<T, V> v) {cerr << "["; for (auto i : v)  {_print(i); cerr << " ";}  cerr << "]"; cerr << endl;} //_print(mmp);

template <typename T      > void  print(T t)              {cout << t;}
template <class T, class V> void  print(pair    <T, V> p) {print(p.ff);      cout << ","; print(p.ss); cout << endl;} //print(p  );
template <class T         > void  print(vector  <T  > v)  {for (T i : v)     {print(i); cout << " ";}  cout << endl;} //print(vec);
template <class T         > void  print(set     <T  > v)  {for (T i : v)     {print(i); cout << " ";}  cout << endl;} //print(st );
template <class T, class V> void  print(map     <T, V> v) {for (auto i : v)  {print(i); cout << " ";}  cout << endl;} //print(mp );
template <class T, class V> void  print(multimap<T, V> v) {for (auto i : v)  {print(i); cout << " ";}  cout << endl;} //print(mmp);


ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) { ll res = 1 ; while (b > 0) {if (b & 1 ) res = (res * a) % mod; a = (a * a) % mod; b >>= 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) { ll arr[3]; extendgcd(a, b, arr); return arr[0]; }
ll mminvprime(ll a, ll b) {   return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
vector<ll> sieve(int n) {int *arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++) if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i) arr[j] = 1;} delete [] arr; return vect;}
ll mod_add(ll a, ll b, ll m) {a %= m; b %= m; return (((a + b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a %= m; b %= m; return (((a - b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a %= m; b %= m; return (((a * b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a %= m; b %= m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;} // only for prime m;
long long phin(long long n) { long long num = n; if (n % 2 == 0) { num /= 2; while (n % 2 == 0) n /= 2; } for (long long i = 3; i * i <= n; i += 2) { if (n % i == 0) { while (n % i == 0) n /= i; num = num / i * (i - 1); } } if (n > 1) num = num / n * (n - 1); return num; } //The code you provided is a function for calculating the Euler’s Totient function (also known as phi function) of a number n. The phi function is used in number theory and represents the count of numbers that are less than n and are coprime with n.
vector<vector<int>> divisors(int N) {vector<vector<int>> div(N + 1); for (int i = 1; i <= N; i++) for (int j = i; j <= N; j += i) div[j].push_back(i); return div;}
//accmulate(arr,arr+n,sum(0ll),myfun) //sum all the element in the arr
//partial_sum(arr,arr+n,brr) //brr={a0,a0+a1,a0+a1+a2,.....}

void solve() {
   int t;
   cin >> t;

   while (t--) {
      string str;
      cin >> str;
      int n = str.length();
      int counter0 = 0;
      for (int i = 0; i < n; i++) if (str[i] == '0') counter0++;
      int counter1 = n - counter0;
      for (int i = 0; i < n; i++) {
         if (str[i] == '1') {
            if (counter0 != 0) counter0--;
            else {
               cout << counter1 << endl;
               break;
            }
         }
         else {
            if (counter1 != 0) counter1--;
            else {
               cout << counter0 << endl;
               break;
            }
         }
      }
      if (counter0 == 0 && counter1 == 0)
         cout << 0 << endl;
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
/*
1. max(a, b): Returns the maximum of a and b. Can be used with more than two arguments or with custom comparator.
   Usage: int m = max(5, 6); // m is 6

2. min(a, b): Returns the minimum of a and b. Can be used with more than two arguments or with custom comparator.
   Usage: int m = min(5, 6); // m is 5

3. reverse(begin, end): Reverses the elements in the range [begin, end).
   Usage: reverse(v.begin(), v.end()); // Reverses the vector v

4. count(begin, end, val): Counts the occurrences of val in the range [begin, end).
   Usage: int c = count(v.begin(), v.end(), 6); // Counts the number of 6s in v

5. find(begin, end, val): Returns an iterator to the first occurrence of val in the range [begin, end). If not found, returns end.
   Usage: auto it = find(v.begin(), v.end(), 6); // Finds 6 in v

6. replace(begin, end, old_val, new_val): Replaces all occurrences of old_val in the range [begin, end) with new_val.
   Usage: replace(v.begin(), v.end(), 6, 7); // Replaces all 6s with 7s in v

7. remove(begin, end, val): Removes all occurrences of val in the range [begin, end). Does not change the size of the container.
   Usage: auto new_end = remove(v.begin(), v.end(), 6); // Removes all 6s from v

8. unique(begin, end): Removes consecutive duplicate elements in the range [begin, end). Does not change the size of the container.
   Usage: auto new_end = unique(v.begin(), v.end()); // Removes consecutive duplicates from v

9. lower_bound(begin, end, val): Returns an iterator to the first element not less than val. The range [begin, end) must be sorted.
   Usage: auto it = lower_bound(v.begin(), v.end(), 6); // Finds the first element not less than 6 in v

10. upper_bound(begin, end, val): Returns an iterator to the first element greater than val. The range [begin, end) must be sorted.
    Usage: auto it = upper_bound(v.begin(), v.end(), 6); // Finds the first element greater than 6 in v

11. next_permutation(begin, end): Rearranges the elements into the next lexicographically greater permutation. Returns true if such a permutation exists, otherwise transforms the range into the first permutation (sorted in ascending order) and returns false.
    Usage: bool exists = next_permutation(v.begin(), v.end()); // Finds the next permutation of v

12. prev_permutation(begin, end): Rearranges the elements into the next lexicographically smaller permutation. Returns true if such a permutation exists, otherwise transforms the range into the last permutation (sorted in descending order) and returns false.
    Usage: bool exists = prev_permutation(v.begin(), v.end()); // Finds the previous permutation of v
*/
/*
1. length(): This function returns the length of the string.
   Usage: string str = "Hello"; int len = str.length(); // len is 5

2. size(): This function also returns the length of the string. It's similar to length().
   Usage: string str = "Hello"; int size = str.size(); // size is 5

3. at(n): This function returns the character at position n in the string.
   Usage: string str = "Hello"; char ch = str.at(0); // ch is 'H'

4. append(str): This function appends the string str to the end of the current string.
   Usage: string str1 = "Hello"; string str2 = " World"; str1.append(str2); // str1 is now "Hello World"

5. compare(str): This function compares the current string with the string str. It returns 0 if the strings are equal, a positive number if the current string is greater, and a negative number if the current string is smaller.
   Usage: string str1 = "Hello"; string str2 = "World"; int cmp = str1.compare(str2); // cmp is negative because 'H' is less than 'W'

6. substr(start, length): This function returns a substring of the current string starting at position start and of length length.
   Usage: string str = "Hello World"; string sub = str.substr(6, 5); // sub is "World"

7. find(str): This function returns the position of the first occurrence of string str in the current string.
   Usage: string str = "Hello World"; int pos = str.find("World"); // pos is 6

8. replace(start, length, str): This function replaces the substring of the current string starting at position start and of length length with the string str.
   Usage: string str = "Hello World"; str.replace(6, 5, "C++"); // str is now "Hello C++"

9. insert(start, str): This function inserts the string str at position start in the current string.
   Usage: string str = "Hello World"; str.insert(6, "C++ "); // str is now "Hello C++ World"

10. erase(start, length): This function removes the substring of the current string starting at position start and of length length.
    Usage: string str = "Hello World"; str.erase(5, 6); // str is now "Hello"

11. c_str(): This function returns a C-style string (null-terminated string) equivalent to the current string.
    Usage: string str = "Hello"; const char* cstr = str.c_str(); // cstr is a C-style string
*/
/*
for(auto &[a, b]: vec) {
    std::cout << a << std::endl;
}
*/