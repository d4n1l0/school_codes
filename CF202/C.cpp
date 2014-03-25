#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    int a[100000];

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    sort(a,a+n);

    int movc;

    movc=0;

    while (1==1)
    {
        if (a[0]==0)
        {
            movc+=a[n-1];
            printf("%d", movc);
        }
        movc += a[2]-a[1]+1;
        for (int i = 1; i <= n; i++) a[i]-=(a[2]-a[1]+1);
        int i = 0;
        while (a[i]>a[i+1] && i < n-1) swap(a[i], a[i+1]);
    }

    


    return 0;
}   
