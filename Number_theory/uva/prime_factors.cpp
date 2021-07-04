#include<bits/stdc++.h>
#define ll long long
using namespace std;
void primefact(ll n)
{
    ll x=n;
    n=abs(n);
    vector<ll>v;
    for(ll i=2;i*i<=abs(n);i++){
        if(n%i==0){
            while(n%i==0){
                v.push_back(i);
                n/=i;
            }
        }
    }

    //cout<<abs(n);
    //cout<<n<<endl;
    if(n>1) v.push_back(n);
    //cout<<"size "<<v.size()<<endl;

    if(x>0){
        cout<<x<<" = ";
        for(int i=0;i<v.size()-1;i++){
            cout<<v[i]<<" x ";
        }
        cout<<v[v.size()-1]<<endl;
    }
    else if(x<0){
        cout<<x<<" = -1 x ";
        for(int i=0;i<v.size()-1;i++){
            cout<<v[i]<<" x ";
        }
        cout<<v[v.size()-1]<<endl;

    }
}
int main()
{
    ll n;
    while(cin>>n){
        if(n==0) return 0;

        primefact(n);
    }
}
