#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(ll a[],ll n)
{
        ll mx=1;
        ll cnt=1;
        ll td=0;
        ll j=0;
        for(ll i=0; i<n-1; i++)
        {
           while(j<n && a[j]-a[i]<=5){
            j++;
            mx=max(mx,j-i);
           }

        }
        cout<<mx<<endl;
}

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    solve(a,n);
}
