#include<bits/stdc++.h>

using namespace std;

long long merge(vector<int> &vec, int low, int mid, int high) {
	vector<int> tmp(high - low + 1); long long inv = 0;
	int num_l = mid - low + 1, num_r = high - (mid + 1) + 1;
	int p = 0, p1 = low, p2 = mid + 1;
	while (p1 <= mid && p2 <= high) {
		if (vec[p1] <= vec[p2]) tmp[p++] = vec[p1++];
		else tmp[p++] = vec[p2++], inv += num_l , num_l--; //p1<p2 and vec[p1]>vec[p2] here is an inversion but we know .......{vec[p1+2] >= vec[p1+1] >= vec[p1]} > vec[p2]
	}
	while (p1 <= mid) tmp[p++] = vec[p1++];
	while (p2 <= high) tmp[p++] = vec[p2++];
	p = 0, p1 = low;
	while (p1 <= high) vec[p1++] = tmp[p++];
	return inv;
}

long long mergeSort(vector<int> &vec, int low, int high) {
	if (low == high) return 0;
	else {
		long long inv = 0ll;
		int mid = (low + high) >> 1;
		inv += mergeSort(vec, low, mid);
		inv += mergeSort(vec, mid + 1, high);
		inv += merge(vec, low, mid, high);
		return inv;
	}
}

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	long long inv = 0;
	inv = mergeSort(vec, 0, n - 1);
	cout << inv << endl;
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