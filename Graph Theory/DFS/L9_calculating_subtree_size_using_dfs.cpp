#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int>v[100001];
int vis[100001],subtree[100001];
int dfs(int node)
{
    vis[node]=1;
    int cur_sz=1;
    for(int child:v[node])
    {
       if(vis[child]==0){
        cur_sz+=dfs(child);
       }
    }
    subtree[node]=cur_sz;
    return cur_sz;
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
    for(int i=1;i<=n;i++){
        int ans;
        if(vis[i]==0){
            ans=dfs(i);
        }
    }
    for(int i=1;i<=sizeof(subtree)/sizeof(subtree[0]);i++){
        cout<<subtree[i]<<" ";
    }
}
