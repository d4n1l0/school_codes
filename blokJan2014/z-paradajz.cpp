#include <iostream>

using namespace std;

int main()
{
	int d,n;
	cin >> n;
	cin >> d;
	int a[1000];
	
	int sol = 0;

	for (int i = 0; i < n; i++) 
	{
		int curr = 1000000;
		cin >> a[i];
		for (int j = max(0, i-d); j<=i; j++) curr = min(curr, a[j]); 
		sol += curr;
	}

	cout << sol << endl;

	return 0;
}
