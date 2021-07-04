#include<bits/stdc++.h>
#define ll long long
#define maxN 1000001
using namespace std;
bool prime[maxN];
vector<ll>v;
ll ans[maxN];
void sieve()
{
    for(ll i=1;i<maxN;i++) prime[i]=1;
    prime[0]=prime[1]=0;
    for(ll i=2;i*i<maxN;i++){
        if(prime[i]){
            for(ll j=i*i;j<maxN;j+=i) prime[j]=0;
        }
    }
    for(ll i=2;i<maxN;i++){
        if(prime[i]) v.push_back(i);
    }
}
void precal()
{
    ans[1]=0;
    for(ll i=2;i<maxN;i++){
        ans[i]=ans[i-1];
        ll n=i,j=0;
        while(!prime[n]){
            if(n%v[j]==0){
                ans[i]++;
                n/=v[j];
            }
            else j++;
        }
        if(prime[n]) ans[i]++;
    }

}
int main()
{
   sieve();
   precal();
   ll n;
   while(cin>>n){
    cout<<ans[n]<<endl;
   }
}
