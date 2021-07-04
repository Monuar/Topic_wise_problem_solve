#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool prime[90000001];
vector<ll>v;
void sieve()
{
    ll maxN=90000000;
    for(ll i=1; i<=maxN; i++) prime[i]=1;
    prime[0]=prime[1]=0;
    for(ll i=2; i*i<=maxN; i++)
    {
        if(prime[i])
        {
            for(ll j=i*i; j<=maxN; j+=i) prime[j]=false;
        }
    }
    for(ll i=2; i<=maxN; i++)
    {
        if(prime[i]) v.push_back(i);
    }
}
int main()
{
    sieve();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<v[n-1]<<endl;
    }
}
