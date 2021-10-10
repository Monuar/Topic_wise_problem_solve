#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int tri[n][n];
    memset(tri,0,sizeof(tri));
    for(int i=0;i<n;i++){
        tri[n-1][i]=a[i];
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            tri[i][j]=tri[i+1][j]+tri[i+1][j+1];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<tri[i][j]<<" ";
        }
        cout<<endl;
    }
}
