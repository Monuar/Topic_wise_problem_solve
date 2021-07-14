#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll val1,val2;
bool solve(ll a[],ll n,ll x){
    ll i=0;
    ll j=n-1;
    while(i<j)
    {
        ll sum=a[i]+a[j];
        if(sum==x) {
            val1=a[i];
            val2=a[j];
            return true;
        }
        if(sum>x) j--;
        else i++;
    }
    return false;
}
int main()
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll x;
    cin>>x;
    bool ans=solve(a,n,x);
    if(ans==true) {
        cout<<val1<<" "<<val2<<endl;
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
