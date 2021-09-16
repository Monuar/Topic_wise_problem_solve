#include<bits/stdc++.h>
using namespace std;
vector<int>v[100001];
int vis[100001],dist[100001];
int dfs(int node,int d)
{
    vis[node]=1;
    dist[node]=d;
    for(int child:v[node])
    {
        if(vis[child]==0){
            dfs(child,dist[node]+1);
        }
    }

}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1,0);
}
