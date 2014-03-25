/*
	Генерисати претраживачко стабло*.

	*Претраживачко стабло приликом обиласка ЛКД (LRD) враћа сортирани низ.
*/

#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

typedef struct buffer
{
	buffer *a;
	buffer *b;
	buffer *pi;
	int L,R;
	int data;	
} buffer;

buffer *start;

queue<buffer*> q;

void LRD(buffer *x)
{
	if (x->a != NULL) LRD(x->a);
	cout << x->data << " " << x->ballance << endl;
	if (x->b != NULL) LRD(x->b);
}

int s;

// a L, b R

bool rlx; 

void Javor(buffer *x)
{
	if (x->data >= s) 
	{
		if (x->a==NULL)
		{
			x->a = (buffer*) malloc(sizeof(buffer));
			(x->a)->a    = NULL; 					
			(x->a)->b    = NULL; 					
			(x->a)->data = s;
			(x->a)->pi   = x;
			(x->a)->L = (x->a)->R = 0;
		}
		else Javor(x->a);
		x->L ++;
	}
	if (x->data < s) 
	{
		if (x->b==NULL)
		{
			x->b = (buffer*) malloc(sizeof(buffer));
			(x->b)->a    = NULL; 					
			(x->b)->b    = NULL; 					
			(x->b)->data = s;
			(x->b)->pi   = x;
			(x->b)->L = (x->b)->R = 0;
		}
		else Javor(x->b);
		x->R ++
	}
	
	if ((x->L) - (x->R) > 1)
	{
		if ((x->a)->L - (x->a)->R > 1)
		{
			buffer *y = x->a;
			buffer *t = y->b;
			y->b = x;
			x->a = t;
		}
	}
}

int main()
{
	start = (buffer*) malloc(sizeof(buffer));
	start->data = start->ballance = 0;
	start->a = start->b = NULL;
	start->pi = NULL;


	int n;
	cin >> n;
	cin >> s;
	start->data = s;


	for (int i = 0; i < n-1; i++)
	{
		cin >> s;
		rlx = false;
		Javor(start);
	}

	LRD(start);

	return 0;
}
