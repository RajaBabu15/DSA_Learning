#include<bits/stdc++.h>

using namespace std;

void solve() {
	// int n; cin>>n;
	// string a,b; cin>>a>>b;
	// unordered_set<int> unst;
	// for(int i=0;i<n;i++) if(a[i]=='b'&&a[i]!=b[i]) {cout<<"No"<<endl; return;} else unst.insert(i);
	// queue<int> que;
	// for(int i=0;i<n;i++){
	// 	if(a[i]=='a'&&a[i]!=b[i]) que.push(i);
	// 	else if(a[i]=='c'&&a[i]!=b[i]) {
	// 		if(que.empty()||!check(que.front()+1,i-1,unst)) {cout<<"No"<<endl; return;}
	// 		else {a[i]='c'&&a[que.front()]='a'; que.pop();}
	// 	}
	// }
	// if(!que.empty()) {cout<<"No"<<endl; return;}
	// for(int i=0;i<n;i++) if(a[i]!=b[i]) {cout<<"No"<<endl; return;}
	// cout<<"Yes"<<endl;

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