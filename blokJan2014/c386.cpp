#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int mx;

	int ds[3000001];

	for (int L = 1; L <= s.size(); L++)
	{
		char div[255];
		for (int i = 'a'; i <= 'z'; i++) div[i] = 0;
		
		int d = 0;

		for (int i = 0; i < L; i++) if (++div[s[i]]==1) d++;
		
		if (L==s.size()) 
		{
			mx = d;
		}

		//cout << 0 << ", " <<  L << ": "<< d << endl;i
		ds[d]++;
		
	
		for (int i = 1; i <= s.size()-L; i++)
		{
			if (s[i-1] != s[i+L-1]) 
			{
				if (--div[s[i-1]] == 0) d--;
				if (++div[s[i+L-1]]== 1) d++;
			}	
			//else {cout << i << " " << L << " JO" << endl;}

			//cout << i << ", " << L << ": " << d << endl;
			ds[d]++;

		}
	}
	
	cout << mx << endl;
	for (int i = 1; i <= mx; i++)	cout << ds[i] << endl;

	return 0;
}
