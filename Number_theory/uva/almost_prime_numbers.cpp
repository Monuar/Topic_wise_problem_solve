#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll prime[1000001];
vector<ll>ans;
ll maxN=1000000;
void sieve()
{

    for(ll i=1;i<=maxN;i++) prime[i]=1;
    prime[0]=prime[1]=0;
    for(ll i=2;i*i<=maxN;i++){
        if(prime[i]){
            for(ll j=i*i;j<=maxN;j+=i){
                prime[j]=0;
            }
        }
    }
}
void solve()
{
   for(ll i=0;i<=maxN;i++){
    if(prime[i])
    {
        //cout<<"i "<<i<<endl;
        for(ll j=i*i;j<=1000000000001;j*=i) ans.push_back(j);
    }
   }
   sort(ans.begin(),ans.end());
}

int main()
{
    sieve();
    solve();
    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll i=0,cnt=0;
        while(ans[i]<l) i++;
        for(;ans.size()&&ans[i]<=r;i++) cnt++;
        cout<<cnt<<endl;
    }
}
