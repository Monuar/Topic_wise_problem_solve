#include<bits/stdc++.h>
#define ll long long
#define N 101
using namespace std;
ll a[N][N],I[N][N];
#define mod 1000000007;
void mul(ll a[][N],ll b[][N],ll n)
{
    ll r[n+1][n+1];
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            r[i][j]=0;
            for(ll k=1;k<=n;k++){
                ll x=(a[i][k]*b[k][j])%mod;
                r[i][j]=(r[i][j]+x)%mod;
            }
        }
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++) a[i][j]=r[i][j];
    }
}
void power(ll a[][N],ll n,ll p)
{
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            if(i==j) I[i][j]=1;
            else I[i][j]=0;
        }
    }
    while(p)
    {
        if(p%2==1){
            mul(I,a,n);
            p--;
        }
        else{
            mul(a,a,n);
            p/=2;
        }
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            a[i][j]=I[i][j];
        }
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p;
        cin>>n>>p;
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++) cin>>a[i][j];
        }
        power(a,n,p);
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
