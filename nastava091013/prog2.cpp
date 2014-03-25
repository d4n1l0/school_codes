#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


int cmp ( const void * a, const void * b)
{
    return *(string*)a > *(string*)b;
}


int main()
{
    string s[100];

    int n;

    cin >> n;
    
    for (int i = 0; i<n; i++) cin >> s[i];

    qsort( s, n, sizeof(string), cmp );

    for (int i = 0; i<n; i++) cout << s[i] << endl;

    return 0;
}
