    #include <stdio.h>
     
    using namespace std;
     
    int main()
    {
        int n,d;
        scanf("%d %d", &n, &d);
     
        int z[300000];
     
        int p,q;
        p=300000;
        q=0;
        for (int i = 1; i<=n; i++)
        {
            int x,y,c;
            scanf("%d %d %d", &x, &y, &c);
            z[x+d+1] -= c;
            if (x+d+1>q) q = x+d+1;
            if (x-d<1)
            {z[1]+=c; if (p>1) p=1;}
            else
            {z[x-d]+=c; if (p>x-d) p=x-d;}
        }
     
        int totalnum=0, sol=0;
     
        for (int i = p; i<=q; i++)
            if (z[i] != 0)
            {
                totalnum+=z[i];
                if (totalnum>sol) sol=totalnum;
            }
     
        printf("%d\n", sol);
    }
     
