#include<bits/stdc++.h>
#define ll long long
using namespace std;
void bs(ll a[],ll n)
{
    ll l=0,r=n-1,ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(a[mid+1]<a[mid]&&mid<r){
            ans=mid+1;
            break;
        }
        else if(a[mid-1]>a[mid]&&l<mid){
            ans=mid;
            break;
        }
        if(a[mid]<a[r]) r=mid-1;
        else l=mid+1;

    }
    cout<<ans<<endl;
}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    bs(a,n);
}
