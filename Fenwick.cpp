#include<bits/stdc++.h>

using namespace std;

class BIT {
private:
	std::vector<int> bit;
	int n;

public:
	BIT(int size) : n(size) {
		bit.resize(n + 1, 0);
	}

	void update(int idx, int val) {
		for (; idx <= n; idx += idx & -idx) {
			bit[idx] += val;
		}
	}

	int query(int idx) {
		int sum = 0;
		for (; idx > 0; idx -= idx & -idx) {
			sum += bit[idx];
		}
		return sum;
	}
};

class Solution {
public:
	// Function to count inversions in the array.
	long long int inversionCount(int N, long long arr[]) {
		// Coordinate compression
		std::vector<long long> temp(arr, arr + N);
		std::sort(temp.begin(), temp.end());
		std::unordered_map<long long, int> rank;

		for (int i = 0; i < N; ++i) {
			rank[temp[i]] = i + 1;
		}

		BIT bit(N);
		long long int inv_count = 0;

		// Traverse the array from right to left
		for (int i = N - 1; i >= 0; --i) {
			// Query the BIT for the number of elements smaller than arr[i]
			inv_count += bit.query(rank[arr[i]] - 1);
			// Update the BIT for the current element
			bit.update(rank[arr[i]], 1);
		}

		return inv_count;
	}
};

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