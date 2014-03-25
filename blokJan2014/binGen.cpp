/*
	Генерисати стабло тако да важи: сви чворови на i-том нивоу носе податак i (i<=N).  
*/

#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

typedef struct buffer
{
	buffer *a;
	buffer *b;
	int data;	
} buffer;

buffer *start;

int n;

void Milan(int L, buffer *x)
{
	x->data = L;
	if (L<n) 
	{
		x->a = (buffer*) malloc(sizeof(buffer));
		x->b = (buffer*) malloc(sizeof(buffer));
		Milan(L+1, x->a);
		Milan(L+1, x->b);
	}
	else
	{
		x->a = x->b = NULL;
	}
}

void LRR(buffer *x)
{
	if (x->a != NULL) LRR(x->a);
	cout << x->data << endl;
	if (x->b != NULL) LRR(x->b);
}

int main()
{
	cin >> n;

	start = (buffer*) malloc(sizeof(buffer));

	Milan(1, start);

	LRR(start);

	return 0;
}
