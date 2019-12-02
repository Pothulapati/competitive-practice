#include<bits/stdc++.h>
using namespace std;



bool dfs(vector<vector<int>> G, int N,int i,bool v[],bool h[])
{
    if(h[i] == true)
    {
        return false;
    }
    for(int V : G[i])
    {
        if(v[V] == false)
        {
            v[V] = true;
            h[V] = true;
            return dfs(G, N, V, v,h);
        }
    }
    return true;
}

int main()
{
    //Adjacency List
    //vector<vector<int>> adj(N);
    int i,j,k,l,N,M,u,v;
    cin >> N >> M;
    vector<vector<int>> adj(N+1);
    bool vs[N+1];
    memset(vs, false, sizeof(vs[0])); 
    bool h[N+1];
    memset(h, false, sizeof(h[0])); 
    for(i=0;i<M;i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //Perform DFS with checks
    //Add source to q;
    vs[1] = true; 
    if(dfs(adj,N,1,vs,h))
    {
        int flag = 0;
        for(i=1;i<=N;i++)
        {
            if(vs[i] == false)
            {
                flag = 1;
            }    
        }
        if(flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}