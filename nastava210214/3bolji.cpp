#include <iostream>

#define sum(x,y) diff[y]-diff[x-1]

using namespace std;

int main()
{

	int n, k;

	cin >> n >> k;

	int i,j;
	
	int diff[1000];
	diff[0];

	for (int i = 1; i <= n; i++) 
	{	
		int a;
		cin >> a;
		diff[i] = diff[i-1] + a;
	}


	i=j=1;
	// i --> j

	int mx=0;

	while(1)
	{
		while( sum(i,j) < k) 
		{
			j++;
			if (sum(i,j) < k) mx = max(sum(i, j), mx);
		}

		while( sum(i, j) > k )
		{
			i++;
		}

	}

	return 0;
}
