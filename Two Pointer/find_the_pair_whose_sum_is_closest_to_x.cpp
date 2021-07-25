#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(ll a[],ll n,ll x)
{
    ll l=0;
    ll r=n-1;
    ll ind1,ind2;
    ll dif=INT_MAX;
    while(l<r){
        ll sum=a[l]+a[r];
        if(abs(sum-x)<dif){
            ind1=l;
            ind2=r;
            dif=abs(sum-x);
        }
        if(sum>x) r--;
        else l++;
    }
    cout<<a[ind1]<<" "<<a[ind2]<<" = "<<a[ind1]+a[ind2]<<endl;
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
    solve(a,n,x);
}
