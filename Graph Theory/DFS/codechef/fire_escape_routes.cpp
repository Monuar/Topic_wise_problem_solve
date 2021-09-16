#include<bits/stdc++.h>
using namespace std;
vector<int>v[100001];
int vis[100001];
int cc_size;
void dfs(int node)
{
    vis[node]=1;
    cc_size++;
    for(int child:v[node]){
        if(vis[child]==0){
            dfs(child);
        }
    }
}
int main()
{
    int t,m,n,a,b;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++) v[i].clear(),vis[i]=0;
        for(int i=1;i<=m;i++){
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int cnt=0;
        long long int ans=1;
        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                cnt++;
                cc_size=0;
                dfs(i);
                ans=(ans*cc_size)%1000000007;
            }
        }
        cout<<cnt<<" "<<ans<<endl;
    }
}
