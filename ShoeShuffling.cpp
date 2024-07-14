#include<bits/stdc++.h>
using namespace std;
#define int long long
// void solve()
// {
//     int n,k;
//     cin>>n>>k;
//     int ans=INT_MAX;
//     vector<int>vec(n);
//     for(int i=0 ; i<n ; i++)
//     {
//       cin>>vec[i];
//     }
//     for(int i=0 ; i<n ; i++)
//     {
//       if((vec[i]%k)==0)
//       {
//          ans=min(ans,0);
//       }
//       else
//       {
//           if(vec[i]>k)
//           {
//               int rem = k - (vec[i]%k) ;
//               ans=min(ans,rem);
//           }
//           else
//           {
//               int rem = k-vec[i];
//               ans=min(ans,rem);
//           }
//       }
//     }

//     cout<<ans<<endl;
// }
void solve()
{
	int n;
	cin >> n;
	vector<int>vec(n);
	vector<int>ans(n, -1);
	for (int i = 0 ; i < n ; i++) cin >> vec[i];

	int i = 0, j = 1;
	while (j < n)
	{
		if (vec[i] == vec[j])
		{
			int temp = ans[i];
			if (temp == -1) {
				ans[i] = j;
				ans[j] = i;
			}
			else {
				ans[i] = j;
				ans[j] = temp;
			}
			i++;
			j++;
		}
		else
		{
			j++ ;
			i++;
		}
	}

	int flag = 1;

	for (int i = 0 ; i < n ; i++)
	{
		if (ans[i] == -1)
		{
			flag = 0;
			break;
		}
	}

	if (flag)
	{
		for (int i = 0 ; i < n ; i++) cout << ans[i] + 1 << " ";

		cout << endl;
	}
	else
	{
		cout << "-1" << endl;
	}

}
int32_t main()
{

	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}