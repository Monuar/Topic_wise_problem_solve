#include<bits/stdc++.h>
#define ll long long
using namespace std;
void bs(ll a[],ll n,ll x)
{
    ll ans=-1,ans1=-1;
    ll l=0,r=n-1;
    while(l<=r){
        ll mid=(l+r)/2;
        if(a[mid]==x){
            ans=mid;
            r=mid-1;
        }
        else if(a[mid]<x) l=mid+1;
        else r=mid-1;
    }
    l=0,r=n-1;
    while(l<=r){
        ll mid=(l+r)/2;
        if(a[mid]==x){
            ans1=mid;
            l=mid+1;
        }
        else if(a[mid]<x) l=mid+1;
        else r=mid-1;
    }
    cout<<ans1-ans+1<<endl;
}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll x;
    cin>>x;
    bs(a,n,x);
}
