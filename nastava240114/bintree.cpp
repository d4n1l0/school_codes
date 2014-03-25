#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct buffer
{
	buffer *a;
	buffer *b;
	int data;
} buffer;

void fill(int *curr) //LSR
{
	buffer *t;
	int val, a, b;
	cin >> val >> >> a >> b;
	
	curr->data = val; 

	if (a==1) 
	{
		t = (*buffer)malloc(buffer);
		curr->a = t;
		fill(t);
	}
	
	if (b==1)
	{
		t = (*buffer)malloc(buffer);
		curr->b = t;
		fill(t);
	}

}

buffer curr*;

int main()
{
	curr = (*buffer)malloc(buffer)
	fill(curr)
}
