    #include <iostream>
     
    using namespace std;
     
    int gcd(int a, int b)
    {
        // a>b
        if(a<b)swap(a,b);
     
        while (1==1)
        {
            if (a%b==0) return b;
            a = a%b;
            swap(a,b);
        }
    }
     
    int main()
    {
        int n;
        int a[1000000];
     
        cin >> n;
     
        for (int i=0; i<n; i++) cin >> a[i];
     
        int sol=gcd(a[0], a[1]);
     
        for (int i=0; i<n-1; i++)
            for (int j=i+1; j<n; j++)
            {
     
                int t = gcd(a[i], a[j]);
                if (sol<t) sol=t;
            }
     
        cout << sol << endl;
    }
     
