#include<bits/stdc++.h>
#define ll long long
using namespace std;
set<ll>s;
void CountDivisors(ll n)
{
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            ll x=i;
            ll y=n/i;
            s.insert(x);
            s.insert(y);
        }

    }
}
int main()
{
    ll n,k;
    cin>>n>>k;
    CountDivisors(n);
    vector<ll>v;
    v.assign(s.begin(),s.end());
    //cout<<v.size()<<endl;
    if(v.size()<k) cout<<-1<<endl;
    else cout<<v[k-1]<<endl;
}
