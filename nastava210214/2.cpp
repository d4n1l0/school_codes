#include <iostream>

using namespace std;

int main()
{
	int n;
	
	int t;

	int A,B;

	cin >> n;

	cin >> A >> B;

	//2 jelo -> 2,1
	//1 jelo -> 1

	for (int i = 1; i <= n; i++)
	{
		
		cin >> t;
		
		if (t==2)
		{
			if (B>0) B--;
			else
			if (A>0) A--;
			else
			{
				cout << i << endl;
				return 0;
			}
		}

		if (t==1)
		{
			if (A>0) A--;
			else
			{
				cout << i << endl;
				return 0;
			}

		}
		
	}

	return 0;
}
