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

    int exist;
    exist = 0;

    for (int i = 1; i <= 9; i++)
    {
        a[i].d=i;
        scanf("%d", &a[i].a);
        if (a[i].a <= v) exist = 1;
    }

    if (!exist) {printf("-1\n"); return 0;}

    qsort(a+1, 9, sizeof(par), cmp);


    
    for (int i = 0; i < v/a[1].a; i++) printf("%d", a[1].d);
    printf("\n");


    return 0;
}
