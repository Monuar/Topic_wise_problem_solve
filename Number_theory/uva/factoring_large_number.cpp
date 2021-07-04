#include<bits/stdc++.h>
#define ll long long
using namespace std;
void primefact(ll n)
{
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                cout<<"    "<<i<<endl;
                n/=i;
            }
        }
    }
    if(n>1) cout<<"    "<<n<<endl;
    cout<<endl;
}
int main()
{
    ll n;
    while(cin>>n){
        if(n<0) break;
        primefact(n);
    }
}
