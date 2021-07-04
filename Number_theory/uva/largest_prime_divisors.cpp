#include<bits/stdc++.h>
#define ll long long
using namespace std;
void primefact(ll n)
{
    vector<ll>v;
    n=abs(n);
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            while(n%i==0) n/=i;
        }
    }
    if(n>1) v.push_back(n);
    if(v.size()==1||v.size()==0) cout<<"-1"<<endl;
    else cout<<v[v.size()-1]<<endl;
}
int main()
{
    ll n;
    while(cin>>n){
        if(n==0) break;
        primefact(n);
    }
}
