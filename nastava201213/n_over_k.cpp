#include <iostream>
#include <fstream>
using namespace std;

// \over{n}{k} = \over{n-1}{k-1} \over{n}{k-1}

int noverk(int n, int k)
{
    if (k>n) return 0;
    if (k==1) return n;
    if (n==k) return 1;
    return noverk(n-1, k-1)+noverk(n-1,k);
}

//euclide - a,b, da li je s

int main()
{
    int n,k;

    ifstream i;
    ofstream o;
    i.open("noverk.in");
    o.open("noverk.out");

    while (!i.eof())
    {
        i >> n >> k;
        
        o << noverk(n,k) << endl;
    }

    return 0;
}
