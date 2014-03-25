#include <iostream>

using namespace std;

int mn1, mn2;

int mx;

int main()
{
	int n;

	cin >> n;

	int a[1000];

	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
		mx = max ( mx, a[i] );
	}
	
	mn1 = mn2 = mx;

	for (int i = 0; i < n; i++)
	{
		if (mn1 > a[i])
		{
			mn2 = mn1;
			mn1 = a[i];
		}
		else
		if (mn2 > a[i])
		{
			mn2 = a[i];
		}
	}

	cout << mn1 + mn2 - 1 << endl;; 


}
