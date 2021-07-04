#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll divisors(ll n)
{
    ll cnt=0;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            if(n/i==i) cnt++;
            else cnt+=2;
        }
    }
    //cout<<"monuar"<<endl;
    return cnt;

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        ll mx=0,a;
        for(ll i=l;i<=r;i++){
           ll x= divisors(i);
           //cout<<x<<endl;
          if(x>mx){
            mx=x;
            a=i;
          }
        }
        cout<<"Between "<<l<<" and "<<r<<", "<<a<<" has a maximum of "<<mx<<" divisors."<<endl;

    }
}
