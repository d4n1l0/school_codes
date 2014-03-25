#include <stdio.h>
#include <stdlib.h>

typedef struct PAR
{
    int d,a;
} par;

int cmp(const void * a, const void * b)
{
    if ( ((par*)a)->a != ((par*)b)->a ) return + ((par*)a)->a - ((par*)b)->a; 
                                        return - ((par*)a)->d + ((par*)b)->d;
                                        
}

int main()
{

    int v;
    scanf("%d", &v);

    par a[10];
    int c[100001];

    int exist;
    exist = 0;

    for (int i = 1; i <= 9; i++)
    {
        a[i].d=i;
        scanf("%d", &a[i].a);
        c[ a[i].a ] = i;
        if (a[i].a <= v) exist = 1;
    }

    if (!exist) {printf("-1\n"); return 0;}

    qsort(a+1, 9, sizeof(par), cmp);

    
    int m = v/a[1].a;
 
    int def = a[1].d;
    
    v -= m*a[1].a;

    for (int i = 2; i < 10; i++) a[i].a -= a[1].a;

    a[1].a=0;

    for (int i = 0; i < m; i++) 
    {
        int curr=def;
        int loss=0;
        for (int j = 1; j <= 9; j++)
            if (a[j].a<=v && a[j].d>def)
            {
                curr = a[j].d;
                loss = a[j].a;
            }

        v-=loss;

        printf("%d", curr);
    }
    
    printf("\n");


    return 0;
}
