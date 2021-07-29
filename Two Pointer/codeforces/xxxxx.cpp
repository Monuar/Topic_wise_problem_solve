#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        ll ans=-1,pre=0,suf=0;
        for(ll i=0;i<n;i++){
            pre+=a[i];
            suf+=a[n-i-1];
            if(pre%x or suf%x) ans=i+1;
        }
        cout<<ans<<endl;
    }
}
