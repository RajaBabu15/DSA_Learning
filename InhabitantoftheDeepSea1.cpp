#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n,k; cin >>n>>k;
	vector<int> vec(n); for(auto &ele:vec) cin>>ele;
	int b=k>>1; k-=b;
	for(int i=0;i<n;i++) {
		int m=min(vec[i],k); k-=m;vec[i]-=m;
		m=min(vec[n-1-i],b); b-=m; vec[n-1-i]-=m;
	}
	if(k || b) {cout<<n<<endl; return;}
	else{
		int count=0; for(auto &ele:vec) count+=(ele!=0);
		cout<<n-count<<endl; return;
	}
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);f
	freopen("output1.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}