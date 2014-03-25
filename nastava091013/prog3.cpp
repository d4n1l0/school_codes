#include <iostream>
#include <string>
#include <cstdio>
using namespace std;


int main()
{
    string s;

    s = getline();

    string p;

    p = "";

    while(s.size() > 0)
    {
        if (s.at(0) != ' ')
        {
            p += s[0];
            cout << p << endl;    
        }
        else
        {
            cout << p << endl;
            if (p[0]==p[p.size()-1]) cout << p << endl;
            p = "";
            cout << endl;
        }

        s.erase(0,1);

    }

    if (p[0]==p[p.size()-1]) cout << p << endl;

    return 0;
}
