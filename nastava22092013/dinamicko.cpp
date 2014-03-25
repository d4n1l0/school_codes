#include <iostream>

using namespace std;

int a[10000][10000];

int main()
{

    int n,m,k;
    
    cin >> n >> m >> k;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) 
        {
            int t;
            cin >> t;
            a[i][j] = (t==1?1:0) + a[i-1][j] + a[i][j-1] - a[i-1][j-1];
        }


    int sol = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            for (int s = i; s<=n; s++)
                for (int p = j; p<=m; p++)
                    {
                        if (a[s][p] - a[i-1][p] - a[s][j-1] + a[i-1][j-1] == k) {sol++; cout << i << " " << j << " " << s << " " << p << endl;} 
                    }


    cout << sol << endl;


    return 0;
}
