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
	int data;	
} buffer;

buffer *start;

queue<buffer*> q;

void LRD(buffer *x)
{
	if (x->a != NULL) LRD(x->a);
	cout << x->data << endl;
	if (x->b != NULL) LRD(x->b);
}

int s;

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
		}
		else Javor(x->a);
	}
	if (x->data < s) 
	{
		if (x->b==NULL)
		{
			x->b = (buffer*) malloc(sizeof(buffer));
			(x->b)->a    = NULL; 					
			(x->b)->b    = NULL; 					
			(x->b)->data = s;
		}
		else Javor(x->b);
	}
}

int main()
{
	start = (buffer*) malloc(sizeof(buffer));
	start->data = 0;
	start->a = start->b = NULL;
	
	int n;
	cin >> n;
	cin >> s;
	start->data = s;


	for (int i = 0; i < n-1; i++)
	{
		cin >> s;
		Javor(start);
	}

	LRD(start);

	return 0;
}
