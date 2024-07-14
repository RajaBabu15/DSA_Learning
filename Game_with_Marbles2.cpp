#include<bits/stdc++.h>

using namespace std;

struct Node {
	int a, b;
	Node(int a, int b): a{a}, b{b} {}
	bool operator < (const Node &o) {
		return o.a + o.b < a + b; //o_Node(o.a+o.b)<Current Node(a+b)
	}
};


template<typename T>
vector<pair<T, T>> zip(const vector<T> &a, const vector<T> &b) {
	vector<pair<T, T>> zipped(min(a.size(), b.size()));
	transform(a.begin(), a.begin() + zipped.size(), b.begin(), zipped.begin(), make_pair<const int&, const int&>);
	return zipped;
}


void solve() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (auto &ele : a) cin >> ele;
	for (auto &ele : b) cin >> ele;
	vector<Node> vec;
	for (auto &[e1, e2] : zip(a, b)) {
		vec.push_back(Node(e1, e2));
	}
	sort(vec.begin(), vec.end());
	long long score = 0;
	for (int i = 0; i < n; i++) {
		if (i & 1) score -= vec[i].b - 1;
		else score += vec[i].a - 1;
	}
	cout << score << endl;

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