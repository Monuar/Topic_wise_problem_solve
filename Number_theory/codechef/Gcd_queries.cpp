#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll a[n+1];
        for(ll i=1;i<=n;i++) cin>>a[i];
        ll pre[n+3];
        pre[0]=0;
        for(ll i=1;i<=n;i++){
            pre[i]=gcd(pre[i-1],a[i]);
        }
        ll pos[n+3];
        pos[n+1]=0;
        for(ll i=n;i>=1;i--){
            pos[i]=gcd(pos[i+1],a[i]);
        }
        ll l,r;
        while(q--){
            cin>>l>>r;
            ll ans=gcd(pre[l-1],pos[r+1]);
            cout<<ans<<endl;
        }
    }
}
