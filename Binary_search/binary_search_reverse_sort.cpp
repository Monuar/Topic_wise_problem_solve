#include<bits/stdc++.h>
#define ll long long
using namespace std;
void bs(ll a[],ll n,ll x)
{
    ll l=0;
    ll r=n-1;
    while(l<=r){
        ll mid=(l+r)/2;
        if(a[mid]==x){
            cout<<mid<<endl;
            return ;
        }
        else if(a[mid]>x){
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<"notfound"<<endl;
}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll x;
    cin>>x;

    bs(a,n,x);
}
