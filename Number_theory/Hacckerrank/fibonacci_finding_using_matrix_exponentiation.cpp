#include<bits/stdc++.h>
#define ll long long
#define N 5
#define mod 1000000007
ll I[N][N],T[N][N];
using namespace std;
void mul(ll I[][N],ll T[][N],ll dim)
{
    ll res[dim+1][dim+1];
    for(ll i=0;i<dim;i++){
        for(ll j=0;j<dim;j++){
            res[i][j]=0;
            for(ll k=0;k<dim;k++){
                ll x=(I[i][k]*T[k][j])%mod;
                res[i][j]=res[i][j]+x;
            }
        }
    }
    for(ll i=0;i<dim;i++){
        for(ll j=0;j<dim;j++){
            I[i][j]=res[i][j];
        }
    }
}
void solve(ll a,ll b,ll n)
{
    I[0][0]=I[1][1]=1;
    I[0][1]=I[1][0]=0;
    T[0][0]=0;
    T[0][1]=T[1][0]=T[1][1]=1;
    n--;
    while(n)
    {
        if(n%2==1){
            mul(I,T,2);
            n--;
        }
        else{
            mul(T,T,2);
            n/=2;
        }
    }
    ll ans=(a*I[0][1])+(b*I[1][1]);
    cout<<ans%mod<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        solve(a,b,n);
    }
}
