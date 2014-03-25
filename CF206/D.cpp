#include <cstdio>
#include <cstdlib>

int a[30][30];

int b[30][30];

char z[30][30];


int main()
{
 
 int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) scanf("%s", z[i]+1);

    for (int i = n; i>=1; i--)
        for (int j = n; j>=1; j--)
        {
            a[i][j] = a[i+1][j] + a[i][j+1] - a[i+1][j+1] + (z[i][j]=='a'?1:0);
            b[i][j] = b[i+1][j] + b[i][j+1] - b[i+1][j+1] + (z[i][j]=='b'?1:0); 
        }

/*    for (int i = 1; i <= n; i++)
    {       
        for (int j = 1; j<=n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    

    for (int i = 1; i <= n; i++)
    {       
        for (int j = 1; j<=n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
*/
    int ca, cb;

    ca = cb = 0;


    int i,j;

    i=j=1;

    for (int t = 2; t <= 2*n - 1; t++)
    {
    if (z[i][j]=='a') ca++;
    if (z[i][j]=='b') cb++;
  //  printf("%d %d\n", i,j);
        if (i==n) {j++; continue;}
        if (j==n) {i++; continue;}

        if (t%2==0)
        {
            //b 1 down -1 right
            int cal = a[i+1][j] < a[i][j+1] ? 1 : ( a[i][j+1] < a[i+1][j] ? -1 : 0  );
            int cbm = b[i+1][j] > b[i][j+1] ? 1 : ( b[i][j+1] > b[i+1][j] ? -1 : 0  );
            
            if (cal<0 && cbm<0)
            {
               j++;
               continue;
            }
            if (cal<0 && cbm==0)
            {
                j++;
            }
            if (cal<0 && cbm>0)
            {
                if (cb>ca) j++; else i++;
            }
            if (cal==0 && cbm<0)
            {
                j++;
            }
            if (cal==0 && cbm==0)
            {
                i++;

            }
            if (cal==0 && cbm>0)
            {
                i++;
            }
            if (cal>0 && cbm<0)
            {
                if (cb>ca) i++; else j++;
            }
            if (cal>0 && cbm==0)
            {
                i++;
            }
            if (cal>0 && cbm>0)
            {
                i++;
            }

        }
        else
        {
            int cam = a[i+1][j] > a[i][j+1] ? 1 : ( a[i][j+1] > a[i+1][j] ? -1 : 0  );
            int cbl = b[i+1][j] < b[i][j+1] ? 1 : ( b[i][j+1] < b[i+1][j] ? -1 : 0  );
            
            if (cbl<0 && cam<0)
            {
               j++;
               continue;
            }
            if (cbl<0 && cam==0)
            {
                j++;
            }
            if (cbl<0 && cam>0)
            {
                if (cb<ca) j++; else i++;
            }
            if (cbl==0 && cam<0)
            {
                j++;
            }
            if (cbl==0 && cam==0)
            {
                i++;

            }
            if (cbl==0 && cam>0)
            {
                i++;
            }
            if (cbl>0 && cam<0)
            {
                if (cb<ca) i++; else j++;
            }
            if (cbl>0 && cam==0)
            {
                i++;
            }
            if (cbl>0 && cam>0)
            {
                i++;
            }
            
        }
    }

    if (z[i][j]=='a') ca++;
    if (z[i][j]=='b') cb++;
    

    if (ca>cb) printf("FIRST\n");
    if (cb>ca) printf("SECOND\n");
    if (cb==ca) printf("DRAW\n");

    return 0;
}
