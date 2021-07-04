#include<bits/stdc++.h>
using namespace std;
vector<int>ar[10001];
int vis[10001],dist[10001];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=1;
    dist[src]=0;
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(int child:ar[cur]){
            if(vis[child]==0){
                vis[child]=1;
                dist[child]=dist[cur]+1;
                q.push(child);
            }
        }
    }
}
int main()
{
    int t,n,m,a,b;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++) ar[i].clear(),vis[i]=0;
        while(m--) cin>>a>>b,ar[a].push_back(b),ar[b].push_back(a);
        bfs(1);
        cout<<dist[n]<<endl;
    }

}
