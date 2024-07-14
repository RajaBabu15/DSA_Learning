#include <bits/stdc++.h>
using namespace std;
#define int long long
int findSum(vector<int> &dkl0, int dkl1, int dkl2)
{
	if (dkl1 == 0)
	{
		return dkl0[dkl2];
	}
	return dkl0[dkl2] - dkl0[dkl1 - 1];
}
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int dkl3;
	cin >> dkl3;
	while (dkl3--)
	{
		int dkl4, dkl5, dkl6;
		cin >> dkl4 >> dkl5 >> dkl6;
		map<int, int> dkl7, dkl8;
		vector<int> dkl9(dkl4), dkl10(dkl5);
		for (int dkl11 = 0; dkl11 < dkl4; dkl11++)
		{
			cin >> dkl9[dkl11];
		}
		for (int dkl12 = 0; dkl12 < dkl5; dkl12++)
		{
			cin >> dkl10[dkl12];
		}
		for (int dkl13 : dkl10)
		{
			dkl7[dkl13]++;
		}
		int dkl14 = 0, dkl15 = 0;
		for (int dkl16 = 0; dkl16 < dkl5; dkl16++)
		{
			dkl8[dkl9[dkl16]]++;
		}
		for (auto dkl17 : dkl7)
		{
			int dkl18 = dkl17.first;
			if (dkl8.find(dkl18) != dkl8.end())
			{
				dkl14 += min(dkl7[dkl18], dkl8[dkl18]);
			}
		}
		if (dkl14 >= dkl6)
		{
			dkl15++;
		}
		if (dkl4 == dkl5)
		{
			cout << dkl15 << endl;
			continue;
		}
		for (int dkl19 = 0; dkl19 < dkl4 - dkl5; dkl19++)
		{
			if (dkl9[dkl19] != dkl9[dkl19 + dkl5])
			{
				dkl14 -= min(dkl7[dkl9[dkl19]], dkl8[dkl9[dkl19]]);
				dkl14 -= min(dkl7[dkl9[dkl19 + dkl5]], dkl8[dkl9[dkl19 + dkl5]]);
				dkl8[dkl9[dkl19]]--;
				dkl8[dkl9[dkl19 + dkl5]]++;
				dkl14 += min(dkl7[dkl9[dkl19]], dkl8[dkl9[dkl19]]);
				dkl14 += min(dkl7[dkl9[dkl19 + dkl5]], dkl8[dkl9[dkl19 + dkl5]]);
			}
			if (dkl14 >= dkl6)
			{
				dkl15++;
			}
		}
		cout << dkl15 << endl;
	}
}