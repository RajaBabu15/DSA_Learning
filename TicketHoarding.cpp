#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{


#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, k;
		cin >> n >> m >> k;
		int arr[n];
		vector<pair<int, int>> vp;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			vp.push_back({arr[i], i});
		}
		sort(vp.begin(), vp.end());
		vector<int> q(n, 0);
		for (int i = 0; i < vp.size(); i++)
		{
			if (k > 0)
			{
				q[vp[i].second] = min(m, k);
				k -= min(m, k);
			}
		}
		int ans = 0;
		int extra = 0;
		for (int i = 0; i < n; i++)
		{
			ans += (q[i] * (arr[i] + extra));
			extra += q[i];

		}
		cout << ans << endl;
	}
}