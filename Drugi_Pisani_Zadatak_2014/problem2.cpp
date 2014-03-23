/*
    Danilo djokic 2. zadatak
*/


#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int n, k, x, y;

    scanf("%d %d", &n, &k);

    int a[100][100];
    int z[100][100];
    int sol[100][100];
    
    for (int i=1; i<=k; i++)
    {
        scanf("%d %d" , &x, &y);
        a[x][y] = 1;
        a[y][x] = 1;
    }

    for (int i = 1; i <=n; i++) 
    {
        for (int j = 1; j<=n; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    
    printf("\n");

    for (int i = 1; i <=n; i++) 
        for (int j = 1; j<=n; j++)
            for (int k = 1; k<=n; k++)
                z[i][j] += a[i][k] * a[k][j];


    for (int i = 1; i <=n; i++) 
    {
        for (int j = 1; j<=n; j++) printf("%d ", z[i][j]);
        printf("\n");
    }
    
    printf("\n");

    for (int i = 1; i <=n; i++) 
        for (int j = 1; j<=n; j++)
            for (int k = 1; k<=n; k++)
                sol[i][j] += a[i][k] * z[k][j];
    
    for (int i = 1; i <=n; i++) 
    {
        for (int j = 1; j<=n; j++) printf("%d ", sol[i][j]);
        printf("\n");
    }

    printf("\n");

    int solution =0;
    
    for (int i = 1; i <=n; i++) 
        for (int j = 1; j<=n; j++)
            solution += sol[i][j];

    printf("%d\n", solution);

    return 0;
}
