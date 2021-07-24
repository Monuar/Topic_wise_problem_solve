#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll fact(ll n)
{
    ll ans=1;
    for(ll i=2;i<=n;i++){
        ans=(ans*i)%mod;
    }
    return ans%mod;
}
ll power(ll b,ll p){
    ll res=1;
    while(p){
        if(p%2==1){
            res=(res*b)%mod;
            p--;
        }
        else{
            b=(b*b)%mod;
            p/=2;
        }
    }
    return res%mod;
}
ll nCr(ll n1,ll r1,ll k)
{
    ll ans,ans1,ans2;
    ans1=power(r1,mod-2);
    ans2=power(k,mod-2);
    ans=(ans*ans1)%mod;
    ans=(ans*ans2)%mod;
    return ans%mod;
}
int main()
{
    ll n,r,n1,r1,k,ans;
    cin>>n>>r;
    n1=fact(n);
    r1=fact(r);
    k=fact(n-r);
    ans=nCr(n1,r1,k);
    cout<<ans<<endl;
}
