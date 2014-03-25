#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[3000];
	int b[3000];
	int n,m;
	
	cin >> n >> m;

	for (int i =  0; i < n; i++) cin >> a[i];

	for (int i =  0; i < m; i++) cin >> b[i];

	sort(b, b+m);
	sort(a, a+n);

	int x,y;

	x=y=0;

	while (true)
	{
		while (b[x]<a[y] && x<m) x++;
		//cout << y << " " << x << endl;
		if (x==m) 
		{
			cout << n-y << endl;
			return 0;
		}
		y++;
		if (y==n) break;
		x++;
	}
	
	cout << "0" << endl;
	return 0;

	return 0;
}
