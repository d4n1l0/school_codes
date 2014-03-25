#include <cstdio>
#include <cstdlib>

int min(int a, int b){return a<b?a:b;}

    int wsum[10001];

int main()
{
    int l,r,Ql, Qr,n,m;
    
    scanf("%d %d %d %d %d", &n, &l, &r, &Ql, &Qr);

    int w[10001];


    

    for (int i = 1; i <= n; i++) {scanf("%d", &w[i]); wsum[i]+=wsum[i-1]+w[i];}
    
    int sol;

    sol = min ( wsum[n]*l + Ql*(n-1), wsum[n]*r + Qr*(n-1) );


    for (int i = 1; i <= n-1; i++) 
    {
        int t=0;

        int cl, cr;

        cl = cr = 0;

        t+=wsum[i]*l;
        t+=(wsum[n]-wsum[i])*r;

        cl = i;
        cr = n-i;

        if (cl>cr)
        {
            t+=(cl-cr-1)*Ql;
        }
        else if (cl < cr)
        {
            t+=(cr-cl-1)*Qr;
        }

        if (t<sol) sol = t;
        

    }

    printf("%d\n", sol);

    return 0;
}
