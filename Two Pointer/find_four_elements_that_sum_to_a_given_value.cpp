#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(ll a[],ll n,ll x)
{
    ll cnt=0;
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            ll l=j+1;
            ll r=n-1;
            while(l<r){
                ll sum=a[i]+a[j]+a[l]+a[r];
                if(sum==x) {
                    cout<<a[i]<<" "<<a[j]<<" "<<a[l]<<" "<<a[r]<<endl;
                    cnt=1;
                }
                if(sum>x) r--;
                else l++;
            }
        }
    }
    if(cnt==0) cout<<"Result is not found"<<endl;
}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll x;
    cin>>x;
    solve(a,n,x);
}
