#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll k=n-1;
    cout<<k/2<<endl;
    ll l=0,r=n-1;
    while(l<r){
        cout<<a[r]<<" "<<a[l]<<" ";
        l++;
        r--;
    }
    if(n&1) cout<<a[r]<<endl;


}
