#include <stdio.h>
#include <algorithm>

using namespace std;

int p[100][100];
int zzz[1000];

void recon(int x, int y)
{
    if (zzz[x]==0) {printf("%d ", x); zzz[x]=1;  }
    if (p[x][y] != -1) 
    {
        recon(x,p[x][y]);
        recon(p[x][y],y);
    }

    if (zzz[y]==0) {printf("%d ", y); zzz[y]=1;  }
}

int main()
{
    int n, k, g1, g2 ;

    scanf("%d %d", &n, &k);

    int a[100][100];
    int sol[100][100];
      
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
        {
            sol[i][j]=-1;
            p[i][j] = -1;
            a[i][j] = -1;
        }

    for (int i=1; i<=k; i++)
    {
        int x,y,d;
        scanf("%d %d %d" , &x, &y, &d);
        a[x][y] = d;
    }


    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            if (i!=j && j!=k && j!=k && a[i][k]!=-1 && a[k][j]!=-1)
            {
                if (a[i][j]==-1)
                {
                    a[i][j] = a[i][k] + a[k][j];
                    p[i][j] = k;
                }
                else
                {
                    if (a[i][k] + a[k][j] < a[i][j]) 
                    {
                        a[i][j] = a[k][j]+a[i][j]; 
                        p[i][j] = k;
                    }
                }
            }

 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("%d ", p[i][j]);
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    scanf("%d %d", &g1, &g2);
    recon(g1,g2);

    return 0;
}
