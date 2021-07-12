#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll prime[10000000];
vector<ll>v;
void sieve()
{
    ll maxN=1000001;
    for(ll i=1;i<=maxN;i++) prime[i]=1;
    prime[0]=prime[1]=0;
    for(ll i=2;i*i<=maxN;i++){
        if(prime[i]){
            for(ll j=i*i;j<=maxN;j+=i){
                prime[j]=0;
            }
        }
    }
    for(ll i=2;i<=maxN;i++){
        if(prime[i]) v.push_back(i);
    }

}
void init(ll l,ll r)
{
    if(l==1) l++;
    ll mx=r-l+1;
    ll a[mx+1];
    for(ll i=0;i<=mx;i++) a[i]=1;
    for(int p:v){
        if(p*p<=r){
            int i=(l/p)*p;
            if(i<l) i+=p;
            for(;i<=r;i+=p){
                if(i!=p) a[i-l]=0;
            }
        }
    }
    for(ll i=0;i<mx;i++){
        if(a[i]){
            cout<<l+i<<endl;
        }
    }

}
int main()
{
    sieve();
    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        init(l,r);
        cout<<endl;
    }
}
