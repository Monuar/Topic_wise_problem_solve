#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll primedivisors(ll n)
{
    vector<ll>v;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            v.push_back(i);
        }
    }
    if(n>1) v.push_back(n);
    if(v.size()==2) return 1;
    return 0;
}
int main()
{
    ll n,cnt=0;
    cin>>n;
    for(ll i=1;i<=n;i++){
        ll ans=primedivisors(i);
        if(ans==1) cnt++;
    }
    cout<<cnt<<endl;
}
