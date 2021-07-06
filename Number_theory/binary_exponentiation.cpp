#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll base,ll n)
{
    ll result=1;
    while(n)
    {
        if(n%2==1){
            result=(result*base)%mod;
            n--;
        }
        else{
            base=(base*base)%mod;
            n/=2;
        }
    }
    return result;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        cout<<power(n,m)<<endl;
    }
}
