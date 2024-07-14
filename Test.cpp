//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
	template <class T>
	static void input(vector<T> &A, int n)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d ", &A[i]);
		}
	}

	template <class T>
	static void print(vector<T> &A)
	{
		for (int i = 0; i < A.size(); i++)
		{
			cout << A[i] << " ";
		}
		cout << endl;
	}
};


// } Driver Code Ends

class Solution {
public:
	int MaxMoney(int M, vector<int> &B, vector<int> &A) {
		// code here
		vector<pair<int, int>> vec(3);
		vec[0].first = A[0] - B[0], vec[0].second = 0;
		vec[1].first = A[1] - B[1], vec[1].second = 1;
		vec[2].first = A[2] - B[1], vec[2].second = 2;
		sort(vec.rbegin(), vec.rend());
		vector<pair<int, int>> tmp;
		for (auto &ele : vec) {
			if (ele.first > 0) tmp.push_back(ele);
		}
		int f = INT_MIN;
		if (tmp.size() > 0) {
			int nm;
			for (auto &ele : tmp) {
				cout << ele.second << " " << B[ele.second] << " " << A[ele.second] << endl;
				nm = (M / B[ele.second]) * A[ele.second];
				if (f == INT_MIN) {
					f = nm;
					M -= (M / B[ele.second]) * B[ele.second];
				}
				else f += nm;
			}
		}
		return max(f, M);
	}
};


//{ Driver Code Starts.

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t;
	scanf("%d ", &t);
	while (t--) {

		int M;
		scanf("%d", &M);


		vector<int> B(3);
		Array::input(B, 3);


		vector<int> A(3);
		Array::input(A, 3);

		Solution obj;
		int res = obj.MaxMoney(M, B, A);

		cout << res << endl;

	}
}

// } Driver Code Ends