#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool prime[1000001];
vector<ll>v;
void sieve()
{
    ll maxN=1000000;
    for(ll i=1; i<=maxN; i++) prime[i]=1;
    prime[0]=prime[1]=0;
    for(ll i=2; i*i<=maxN; i++)
    {
        if(prime[i])
        {
            for(ll j=i*i; j<=maxN; j+=i)
            {
                prime[j]=0;
            }
        }
    }
    for(ll i=2; i<=maxN; i++)
    {
        if(prime[i]) v.push_back(i);
    }
}
int main()
{
    ll n;
    sieve();
    vector<ll>ans;
    while(cin>>n)
    {
        if(n==0) break;
        cout<<n<<":"<<endl;
        int cnt=0;
        for(ll i=0;i<n;i++){
            if(v[i]>n) break;
            if(prime[n-v[i]]){
                cout<<v[i]<<"+"<<n-v[i]<<endl;
                cnt=1;
                break;
            }
        }
        if(cnt==0) cout<<"NO WAY!"<<endl;

    }
}
