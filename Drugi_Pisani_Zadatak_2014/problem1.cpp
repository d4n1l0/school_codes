#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int f(int n, int m)
{
    if (n==m && n==1) return 1;
    int z[100][100];

    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= m; j++)
            z[i][j] = 0;

    z[0][1] = z[1][0] = 1;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            z[i][j] = z[i-1][j] + z[i][j-1];

    return z[n][m];

}

int main()
{
    int n, m, x[4], y[4],  z[1000][1000];

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= 3; i++) scanf("%d %d", &x[i], &y[i]);
    
    for (int i =1; i <= 2; i++)
        for (int j = i+1; j <= 3; j++)
            if (x[i] > x[j])
            {
                swap(x[i], x[j]);
                swap(y[i], y[j]);
            }

    
    for (int i = 1; i <= 3; i++) printf("%d %d\n", x[i], y[i]);

    if (y[2]<y[1] || y[3]<y[2]) { printf("-1\n"); return 0;}

    
    int sol = f(x[1], y[1])* f(x[2]-x[1]+1, y[2]-y[1]+1)* f(x[3]-x[2]+1, y[3]-y[2]+1) * f( n-x[3]+1, m-y[3]+1 );
    printf("%d %d %d %d\n", f(x[1], y[1]), f(x[2]-x[1]+1, y[2]-y[1]+1), f(x[3]-x[2]+1, y[3]-y[2]+1), f( n-x[3]+1, m-y[3]+1) );


    printf("%d\n", sol);

    return 0;
}
