#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,t;
    cin>>n>>t;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll pre[n+1];
    pre[0]=a[0];
    for(ll i=1;i<n;i++){
        pre[i]=pre[i-1]+a[i];
    }
    ll ans=upper_bound(pre,pre+n+1,t)-pre;
    cout<<ans<<endl;
}
