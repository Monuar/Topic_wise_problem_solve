#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll isprime[1000001];
vector<ll>v;
ll sieve()
{
    ll maxN=1000000;
    for(ll i=1; i<=maxN; i++) isprime[i]=1;
    isprime[0]=isprime[1]=0;
    for(ll i=2; i<=maxN; i++)
    {
        if(isprime[i])
        {
            for(ll j=i*i; j<=maxN; j+=i)
            {
                isprime[j]=0;
            }
        }
    }
    for(ll i=2; i<maxN; i++)
    {
        if(isprime[i]==1)
        {
            v.push_back(i);
        }
    }


}
int main()
{
    sieve();
    ll t;
    cin>>t;
    while(t--)
    {
        ll d;
        cin>>d;
        ll ans1=0,ans2=0;
        for(ll i=0; i<1000000; i++)
        {
            if(v[i]-1>=d&&ans1==0)
            {
                ans1=v[i];

            }
            else if(v[i]-ans1>=d&&ans2==0&&ans1!=0)
            {
                ans2=v[i];
                break;
            }
        }
        cout<<ans1*ans2<<endl;
    }
}
