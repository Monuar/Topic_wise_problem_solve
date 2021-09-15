#include<bits/stdc++.h>
#define ll long long
using namespace std;
int N,M;
bool vis[101][101];
bool isvalid(int x,int y)
{
    if(x<1||x>N||y<1||y>M) return false;
    if(vis[x][y]==true) return false;
    return true;
}
void dfs(int x,int y)
{
    vis[x][y]=1;
    cout<<x<<" "<<y<<endl;
    if(isvalid(x-1,y)) dfs(x-1,y);
    if(isvalid(x,y+1)) dfs(x,y+1);
    if(isvalid(x+1,y)) dfs(x+1,y);
    if(isvalid(x,y-1)) dfs(x,y-1);
}

int main()
{
    cin>>N>>M;
    dfs(1,1);
}
