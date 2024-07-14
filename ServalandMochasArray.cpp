#include<bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n, a[10005];
		cin >> n; int flag = 0;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) flag |= __gcd(a[i], a[j]) <= 2;
		}
		cout << (flag ? "Yes\n" : "No\n");
	}
}