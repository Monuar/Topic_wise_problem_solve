#include<bits/stdc++.h>
using namespace std;
int ar[101][101];
bool vis[101][101];
int n,m;
bool isvalid(int x,int y)
{
    if(x<1|| x>n||y<1||y>m) return false;
    if(vis[x][y]==1||ar[x][y]==0) return false;
    return true;
}
int dfs(int x,int y)
{
    vis[x][y]=1;
    if(isvalid(x-1,y)) dfs(x-1,y);
    if(isvalid(x,y+1)) dfs(x,y+1);
    if(isvalid(x+1,y)) dfs(x+1,y);
    if(isvalid(x,y-1)) dfs(x,y-1);
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>ar[i][j];
        }
    }
    int cc=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(ar[i][j]==1&&vis[i][j]==false){
                dfs(i,j);
                cc++;
            }
        }
    }
    cout<<cc<<endl;
}
