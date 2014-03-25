#include <iostream>
#define C 200;


using namespace std;

int N,M,K;

int bf[300][300];
char stamp[200][200];
int sum;

int main(int argc, char* argv[])
{


	// Input
	cin >> N >> M >> K;
	

	// Reading matrix

	for (int i = 1; i <= N; i++) 
		for (int j = 1; j <= M; j++) cin >> stamp[i][j];
	

	sum = 0;

	if ( K >= N)
	{ // Apply Clever Method
		int t,u;
	
		for (int x = N - 1; x >= 1 - M; x--) // x = i - j  =>    j = i - x
		{

			// Finding minimum & maximum positions of '*' in diagonal x
			
			t = u = -1;

			for (int i = 0; i <= N; i++)
				if (i-x >= 1 && i-x <= M && stamp[i][i-x] == '*') {t = i; break;}

			for (int i = N; i >= 0; i--)
				if (i-x >= 1 && i-x <= M && stamp[i][i-x] == '*') {u = i; break;}

			
			if ( t != -1) 	sum += u+K-1-t+1;	
		}
			
	}
	else
	{ // Apply Stupid Method

		for (int k = 1; k <= K; k++)	
		{
			for (int i = 1; i <= N; i++)
				for (int j = 1; j <= M; j++)
					if (stamp[i][j]=='*' && bf[i+k-1][j+k-1]==0)
					{
						bf[i+k-1][j+k-1] = 1;
						sum++;
					}
	
		}
	}

	
	cout << sum << endl;	

	return 0;
}
