#include <cstdio>
#include <cstdlib>

int main()
{
    int c1, c2, c3, c4;

    scanf("%d %d %d %d", &c1, &c2, &c3, &c4);

    int n,m;

    scanf("%d %d", &n, &m);

    int a[1000], b[1000];

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    int sol = 0;

    sol = c4;

    if (2*c3 < sol) sol = 2*c3;

    int CheapB, CheapT;

    CheapB = CheapT = c3;

    int t;

    t = 0;

    for (int i = 0; i < n; i++)
    {
        if ( a[i]*c1 < c2 ) t += a[i]*c1; else t+=c2;
    }

    if (t<CheapB) CheapB = t;

    t=0;

    for (int i = 0; i < m; i++)
    {
        if ( b[i]*c1 < c2 ) t += b[i]*c1; else t+=c2;
    }

    if (t<CheapT) CheapT = t;

    if (CheapT + CheapB < sol) sol = CheapB + CheapT;

    if (c3 + CheapB < sol) sol = c3 + CheapB;

    if (c3 + CheapT < sol) sol = c3 + CheapT;

    printf("%d\n", sol);

    return 0;
}
