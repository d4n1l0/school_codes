#include <iostream>
 
using namespace std;
 
int z[10001][10001];
 
int main()
{
    int n;
 
 
    cin >> n;
    z[1][1]=1;
 
    n++;
    n++;
 
    for (int i = 1; i<=n; i++)
        for (int j = 1; j<=i; j++)
           z[i][j] += z[i][j-1] + z[i-1][j];
 
    cout << z[n][n] << endl;
 
}
