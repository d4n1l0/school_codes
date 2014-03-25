#include <iostream>

using namespace  std;

int main()
{
	int n;
	int k;
	int a[1000];

	cin >> n >> k;


	for (int i = 1; i <= n; i++) cin >> a[i];

	int diff[1000];

	diff[n] = 1;

	for (int i = n-1; i >= 1; i--) 
	diff[i] = diff[i+1] + ( a[i]!=a[i+1] ? 1 : 0 );
	

	for (int i = 1; i <= k; i++) 
	{
		int l;
		cin >> l;
		cout << diff[l] << endl;

	}


	return 0;
}
