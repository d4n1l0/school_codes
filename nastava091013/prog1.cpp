#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,a,b;

    cin >> s;
    cin >> a;
    cin >> b;

    while (s.find(a) != string::npos) 
    {
        s.replace(s.find(a),b.length(),b);
    }

    cout << s << endl;

    return 0;
}
