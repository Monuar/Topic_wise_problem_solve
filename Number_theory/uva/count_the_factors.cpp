#include<bits/stdc++.h>
using namespace std;
#define ll long long
void primefact(ll n){
    ll x=n,cnt=0;
    for(ll i=2;i*i<=n;i++){

        if(n%i==0){
           // ll cnt=0;
            while(n%i==0){
               // cnt++;
                n/=i;
            }
            cnt++;
        }
    }
    if(n>1) cnt++;
    cout<<x<<" : "<<cnt<<endl;
}
int main()
{
    ll n;
    while(cin>>n){
        if(n==0) break;
        primefact(n);
    }
}
