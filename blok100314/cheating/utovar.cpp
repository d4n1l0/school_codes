    #include <iostream>
    #include <stdlib.h>
    using namespace std;
     
    int main()
    {
        int n;
        int m;
        int w[1000], v[1000];
        cin >> m >> n;
        for (int i=1; i<=n; i++) cin >> w[i];
        for (int i=1; i<=n; i++) cin >> v[i];
        int a[1000];
        a[0]=0;
        int mx=0;
        for (int i=1; i<=m; i++)
        {
            for (int j=1; j<=n; j++)
                if (i>=w[j]) a[i] = max (a[i], a[i-w[j]]+v[j]);
            if (a[i]>mx) mx=a[i];
        }
        cout << mx;
    }
     
