#include<bits/stdc++.h>
using namespace std;
vector<int>v[10000];
int vis[10001],col[10001];
bool dfs(int node,int c)
{
    vis[node]=1;
    col[node]=c;
    for(int child:v[node]){
        if(vis[child]==0){
            if(dfs(child,c^1)==false) return false;
        }
        else{
            if(col[node]==col[child]) return false;
        }
    }
    return true;

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
    int ans=dfs(1,0);
    if(ans==true) cout<<"bipertite graph"<<endl;
    else cout<<"not a bipertite graph"<<endl;
}
