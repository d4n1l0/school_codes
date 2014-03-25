#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;


int s;


int gcd(int x, int y)
{
    if (x>y) swap(x,y);
    // x < y
    if (x==y) return x;
    cout << endl;
    while (true) 
    {
        cout << x << " " << y << endl;
        if (y%x==0) return x;
        y = y % x;
        swap(x,y);
    }
}

int main()
{
    int a,b;

    ifstream i;
    ofstream o;
    i.open("nzd.in");
    o.open("nzd.out");

    i >> s;

    int sol = 0;

    while (!i.eof())
    {
        i >> a >> b;
        if (gcd(a,b)==s) sol++; 
    }

    o << sol << endl;
    
    i.close();
    o.close();
    return 0;
}
