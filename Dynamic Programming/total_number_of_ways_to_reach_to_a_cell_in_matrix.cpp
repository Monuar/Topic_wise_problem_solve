#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            a[i][j]=0;
        }
    }

    for(int i=1;i<=m;i++){
        a[1][i]=1;
    }
    for(int i=1;i<=n;i++){
        a[i][1]=1;
    }

    long long sum=0;
    for(int i=2;i<=n;i++){
        for(int j=2;j<=m;j++){
            sum=(a[i-1][j]+a[i][j-1]);
            a[i][j]=sum%100000007;
        }
    }
    cout<<"matrix"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<a[n][m]<<endl;
}
