#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(ll a[],ll b[],ll n,ll m,ll x)
{
    ll ind1,ind2,l,r,dif;
    l=0;
    r=m-1;
    dif=INT_MAX;
    while(l<n&&r>=0){
        ll sum=a[l]+b[r];
        while(abs(sum-x)<dif){
            ind1=l;
            ind2=r;
            dif=abs(sum-x);
        }
        if(sum>x) r--;
        else l++;
    }
    cout<<a[ind1]<<" "<<b[ind2]<<" = "<<a[ind1]+b[ind2]<<endl;
}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll m;
    cin>>m;
    ll b[m];
    for(ll i=0;i<m;i++) cin>>b[i];
    sort(b,b+m);
    ll x;
    cin>>x;
    solve(a,b,n,m,x);
}
