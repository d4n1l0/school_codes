#include <iostream>

using namespace std;


int main()
{

	int n,k;

	cin >> n >> k;
	

	int dp[1000];
	int a[1000];

	a[0] = 0;

	for (int i = 1; i <= n; i++)
	{
		int t;

		cin >> t;
		
		a[i] = a[i-1] + t;

	}

	int mx = 0;

	for (int i = 1; i <= n-1; i++)
		for (int j =  i+1; j <= n; j++)
		{
			if (a[j]-a[i-1] > mx && a[j]-a[i-1] < k)
			mx = a[j] - a[i-1];
		}
	


	cout << mx << endl;
	

	return 0;
}
