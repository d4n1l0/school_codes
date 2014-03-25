/*
	Генерисати бинарно балансирано стабло* и ишчитати га методом ЛКД (LDR).

	*Балансирано стабло је стабло коме постоји највише један ниво N, тако
	да је број чворова на том нивоу мањи од 2^N.
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
	if (x->data == -1) return;
	LRD(x->a);
	cout << x->data << endl;
	LRD(x->b);
}

int main()
{
	start = (buffer*) malloc(sizeof(buffer));
	q.push(start);

	int s,t;
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> s;

		buffer *x = q.front();

		x->data = s;

		x->a = (buffer*)malloc(sizeof(buffer));
		x->b = (buffer*)malloc(sizeof(buffer));

		q.push(x->a); q.push(x->b);
		(x->a)->data = (x->b)->data = -1;
	 	q.pop();
		
	}

	LRD(start);

	return 0;
}
