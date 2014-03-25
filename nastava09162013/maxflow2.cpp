#include <iostream>

using namespace std;

int z[100][100];
int mn[100];

int from[100];
int to[100];
int sol;
int s,t;
int n,m;

void dfs(int x, int lvl)
{   
    if (x==t)
    {
        t = mn[lvl];
        for (int i = 1; i <= lvl; i++)
        {
            z[from[i]][to[i]] -= t;
            mn[i]-=t;
        }
        
        sol += mn[lvl];
    }

    for (int i = 1 ; i <= n; i++)
        if (z[x][i]!=0)
        {
            from[lvl] = x;
            to[lvl]=i;
            mn[lvl+1] = min(mn[lvl], z[x][i]);
            dfs(i,lvl+1);
        }

}


int main()
{

    cin >> n >> m;

    for (int i = 0; i < m; i++) 
    {
        int u,v,w;
        cin >> u >> v >> w;
        z[u][v] = w;
    }
    
    mn[1]=10000;

    cin >> s >> t;
    
    dfs(s, 1);
    
    cout << sol << endl;

    return 0;
}
