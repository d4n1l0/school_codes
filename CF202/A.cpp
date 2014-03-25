#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int c25,c50,c100;
    c25=c50=c100=0;

    for (int i = 0; i < n; i++)
    {
        int t; scanf("%d", &t);

        if (t==25) {c25++; continue;}
        if (t==50) 
        {
            if (c25>0)
            {
                c25--;
                c50++;
                continue;
            }
            else
            {
                printf("NO\n");
                return 0;
            }
        }
        if (t==100)
        {
            if (c50>0 && c25>0)
            {
                c50--;
                c25--;
                c100++;
                continue;
            }
            if (c25>2)
            {
                c25-=3;
                c100++;
                continue;
            }
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
