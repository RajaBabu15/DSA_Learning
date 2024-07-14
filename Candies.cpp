#include<bits/stdc++.h>

using namespace std;

void solve() {
	int N = 100;
	vector<bool> primes(N + 1, true);
	primes[0] = primes[1] = false;
	for (int i = 0; i < N + 1; i++) {
		if (primes[i] == false) continue;
		for (int j = 2 * i; j < N + 1; j += i) primes[j] =
		}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t = 1;
	while (t--) {
		solve();
	}
	return 0;
}