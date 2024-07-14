#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	string str; cin >> str;
	for (int i = n; i >= 1; i--)
	{
		set<int> st; bool flag = true;
		for (int j = 0; j < n; j++)
		{
			int sz = st.size();
			if (sz % 2 == 0)
			{
				if (str[j] == '0')
				{
					if (j + i - 1 <= n - 1) st.insert(j + i - 1);
					else flag = false;
				}
			}
			else
			{
				if (str[j] == '1')
				{
					if (j + i - 1 <= n - 1) st.insert(j + i - 1);
					else flag = false;
				}
			}
			auto it = st.find(j);
			if (it != st.end()) st.erase(it);

		}
		if (flag) {cout << i << endl; break;}

	}
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