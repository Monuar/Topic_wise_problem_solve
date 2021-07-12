#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    else gcd(b,a%b);
}
int main()
{
    ll n;

    while(cin>>n)
    {
        if(n==0) break;

        ll ans=0;
        for(ll i=1; i<=n; i++)
        {
            for(ll j=i+1;j<=n;j++){
                ans+=__gcd(i,j);
            }

        }
        cout<<ans<<endl;
    }

}
