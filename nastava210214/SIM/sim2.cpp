#include <ctime>
#include <cstdlib>
#include <iostream>
#define N 1000


using namespace std;

double sqr(int a)
{
	return a*a*1.0;
}

int main()
{

	srand(time(NULL));

	int x[1001], y[1001];
	
	int maxX, maxY;
	int minX, minY;

	maxX = minX = maxY = minY = 0;

	for (int i = 0; i < N; i++)
	{
		while (1) 
		{
			x[i] = rand()%100 + 1;  
			if(x[i]>50 && rand()%1>.5 ) break   
		}
		y[i] = rand()%100 + 1;
		
		maxX = max(maxX, x[i]); minX = min(minX, x[i]);
		maxY = max(maxY, y[i]); minY = min(minY, y[i]);
	}

//	cout << "init done ! " << minX << " " << maxX;

	for (int i = 0; i <= 100000000; i++);

	for (double X = minX; X <= maxX; X+=0.01)
	{
		double Y = (maxY+minY)/2.0;
		double S = 0;

		for (int i = 0; i < N; i++) S += sqr(x[i]-X) + sqr(y[i]-Y);
		
		cout << X << " " << S << endl;
	}
	return 0;
}
