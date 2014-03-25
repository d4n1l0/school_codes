#include <cstdio>
#include <cstdlib>


int main()
{
    int k,d;

    scanf("%d %d", &k, &d);

    if (k==1 && d==0) {printf("0\n"); return 0;}

    if (d!=0)
    {
        printf("%d", d);
        k--;    
    }
    else
    {   
        printf("No solution\n");
        return 0;
    }
    

    for (int i = 1; i <= k; i++) printf("0");

    printf("\n");

    return 0;
}
