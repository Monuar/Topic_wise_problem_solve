#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];
bool dfs(int node,int p)
{
    vis[node]=1;
    for(int child:ar[node]){
        if(vis[child]==0){
            if(dfs(child,node)==true) return true;
        }
        else
            if(child!=p) return true;
    }
    return false;
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    cout<<dfs(1,-1);
}
