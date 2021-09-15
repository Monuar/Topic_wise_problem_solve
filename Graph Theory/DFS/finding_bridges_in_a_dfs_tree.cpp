#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int>v[100];
int vis[101],in[101],low[101];
int timer;
void dfs(int node,int par)
{
    vis[node]=1;
    in[node]=low[node]=timer;
    timer++;
    for(int child:v[node])
    {
        if( child==par) continue;
        else if(vis[child]==1){
            //edge node to child a back egde
            low[node]=min(low[node],in[child]);
        }
        else{
            //edge node to child a forward edge
            dfs(child,node);
            if(low[child]>in[node]){
                cout<<node<<" -> "<<child<<" is a bridge"<<endl;
            }
            low[node]=min(low[node],low[child]);
        }
    }
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    while(m--){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1,-1);
}
