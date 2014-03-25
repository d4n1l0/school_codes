
#include <iostream>
#include <vector>

using namespace std;

vector<int> s[10000];
int mtx[1000][10000];


int dfs(int x)
{
    int total = 0;
    while (!s[x].empty())
    {
        int t,t1;
        t = dfs(s[x].back());
        if (t>0) 
            total+=t;
        else
            if (mtx[x][s[x].back()]==2) total+=1;

        s[x].pop_back();
    }
    
    return total;
}

int main()
{
    int n;

    cin >> n;
    
    for (int i = 0; i < n; i++) 
    {
        int u,v,w;
        cin >> u >> v >> w;
        mtx[u][v] = w;
        s[u].push_back(v);
    }

    cout << dfs(0) << endl;
    
    return 0;
}
