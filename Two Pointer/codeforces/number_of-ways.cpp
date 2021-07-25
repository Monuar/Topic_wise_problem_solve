#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll total=0;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        total+=a[i];
    }
    if(total%3!=0)
    {
        cout<<0<<endl;
        return 0;
    }

    ll cnt=0,ans=0,sum1=0;
    ll one_third=total/3;
    ll two_third=one_third*2;
    for(ll i=0; i<n; i++)
    {
        sum1+=a[i];
        if(sum1==one_third)
        {
            ans++;
            sum1=0;
        }

    }
    cout<<ans/3<<endl;

}
