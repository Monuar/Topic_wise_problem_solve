#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int>v[2001];
int vis[20001],col[2001];
bool dfs(int node,int c)
{
    vis[node]=1;
    col[node]=c;
    for(int child:v[node]){
        if(vis[child]==0){
            if(dfs(child,c^1)==false) return false;
        }
        else{
            if(col[child]==col[node]) return false;
        }
    }
    return true;

}
int main()
{
    int t,n,m,a,b;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        cin>>n>>m;
        for(int i=1;i<=n;i++) v[i].clear(),vis[i]=0;
        for(int i=1;i<=m;i++){
            cin>>a>>b;
            v[a].push_back(b);
            v[b].pb(a);
        }
        bool flag=true;
        for(int i=1;i<=n;i++){
            if(vis[i]==0){
               bool ans=dfs(i,0);
               if(ans==false) flag=false;

            }
        }
        cout<<"Scenario #"<<tc<<":"<<endl;
        if(flag==false){
           cout<<"Suspicious bugs found!"<<endl;
        }
        else{
            cout<<"No suspicious bugs found!"<<endl;
        }
    }
}
