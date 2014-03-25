#include <stdio.h>

int main()
{
	int s1, s2;
	int t1, t2;
	
	scanf("%d:%d", &s1, &s2);
	scanf("%d:%d", &t1, &t2);

	int x = (s1*60 + s2 - t1*60 - t2) % 1440;

	printf ("%.2d:%.2d\n",  (x/60>=0)? x/60 : 24+x/60 , (x%60>=0)?x%60:60+x%60 );

	return 0;
}
