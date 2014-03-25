#include <iostream>

using namespace std;

int n;
int m;

int x[10001][10001];
int y[10001][10001];

int X[10001][10001];
int Y[10001][10001];

double dist(double a, double b)
{



}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> x[i] >> y[i];
	
	cin >> X[1] >> Y[1];

	int maxX, maxY, minX, minY;

	maxX = minX = X[1];
	maxY = minY = Y[1];

	cin >> m;
	for (int i = 2; i <= m; i++)
	{
		cin >> X[i] >> Y[i];
		maxX = max(X[i], maxX); minX = min(X[i], minX);
		maxY = max(Y[i], maxY); minY = min(Y[i], minY);
	} 
	
	int Xpos;

	// LOKALIZACIJA PO X KOORDINATI
	int L,R;

	L = minX; R = maxX;



	


}
