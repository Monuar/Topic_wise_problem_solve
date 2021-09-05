#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int>v[10001];
int timer=1;
int vis[10001],IN[10001],OUT[10001];
bool dfs(int node){
    vis[node]=1;
    IN[node]=timer++;
    for(int child:v[node]){
        if(vis[child]==0){
            dfs(child);
        }
    }
    OUT[node]=timer++;

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
        dfs(i);
    }
    for(int i=0;i<sizeof(IN)/sizeof(IN[0]);i++){
        cout<<IN[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<sizeof(OUT)/sizeof(OUT[0]);i++){
        cout<<OUT[i]<<" ";
    }


}
