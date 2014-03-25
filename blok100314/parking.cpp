#include <iostream>

#define MaxN 1001


using namespace std;

int D,R,N;

typedef struct Car
{
	int L;
	int P;
} car;


car C[MaxN];

int main()
{

	// Input
	
	cin >> D >> R >> N;

	D += R;

	for (int i = 1; i <= N; i++)
	{
		 cin >> C[i].L >> C[i].P;
		 C[i].L += R;
	}
 
	// Two Knapsack Problem Code
		

}
