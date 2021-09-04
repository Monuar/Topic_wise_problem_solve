#include<bits/stdc++.h>
using namespace std;
vector<int>v[100000];
int vis[200001];
void dfs(int node)
{
    vis[node]=1;
    for(int child:v[node]){
        if(vis[child]==0){
            dfs(child);
        }
    }
}
int main()
{
    int n,m,x,y;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int cc=0;
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            dfs(i);
            cc++;
        }
    }
    cout<<cc<<endl;
}
