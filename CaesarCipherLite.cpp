#include<bits/stdc++.h>

using namespace std;


vector<int> generatePrimes(int start, int count) {
	vector<int> primes;

	// Handle edge cases: 1 and 2 are prime
	if (start <= 1) {
		primes.push_back(2);
		start = 3;
	}
	if (start == 2) {
		primes.push_back(2);
		start = 3;
	}

	// Use trial division efficiently:
	// - Only check divisibility up to sqrt(number)
	// - Start divisibility checks from 3 with an increment of 2
	// - Only check odd numbers since even numbers (except 2) are composite
	for (int num = start; primes.size() < count; num += 2) {
		bool isPrime = true;
		for (int divisor = 3; divisor * divisor <= num; divisor += 2) {
			if (num % divisor == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			primes.push_back(num);
		}
	}

	return primes;
}

void solve() {
	int n; cin >> n;
	vector<int> vec;
	if (n & 1) vec.push_back(1);
	vector<int> ans = generatePrimes(2, n >> 1);
	vec.insert(vec.end(), ans.begin(), ans.end());
	vec.insert(vec.end(), ans.begin(), ans.end());
	cout << n << ":{";
	for (auto &ele : vec) cout << ele << " "; cout << "}" << endl;
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