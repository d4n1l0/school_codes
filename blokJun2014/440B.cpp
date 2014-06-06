#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct par
{
    int a,b;
}

queue<par> s; //supply
queue<par> d; //demand

int main()
{
    int n;
    
    int a[50001];
    
    int total=0;

    cin >> n;

    for (int i = 0; i < n; i++) {cin >> a[i]; total+=a[i];}

    int k = sum/n;

    for (int i = 0; i < n; i++) a[i] = a[i]-k;

    int sol = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i]>0)
        {   
           if (!d.empty())
           {
               while (d.front() < a[i]) {a[i]-=d.front(); d.pop();}
               

           }

        }
    }
    


    return 0;
}
