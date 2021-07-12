#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    else  gcd(b,a%b);
}
int main()
{
    ll a,b;
    cin>>a>>b;
    ll ans=gcd(a,b);
    cout<<ans<<endl;
}
