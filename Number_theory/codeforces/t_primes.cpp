#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(ll n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++){
        ll sq=sqrt(a[i]);
        ll ans=solve(sq);
        if(ans==1&&sq*sq==a[i]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
