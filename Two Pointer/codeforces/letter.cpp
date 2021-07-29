#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,x=0;
    cin>>n>>m;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        a[i]=a[i]+x;
        x=a[i];
    }
    while(m--)
    {
        ll x;
        cin>>x;
        ll y=lower_bound(a,a+n,x)-a;
        y++;
        if(y==1) cout<<y<<" "<<x<<endl;
        else
        {
            cout<<y<<" "<<x-a[y-2]<<endl;
        }
    }
}
