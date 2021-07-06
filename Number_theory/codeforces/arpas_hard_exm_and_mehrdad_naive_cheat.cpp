#include<bits/stdc++.h>
#define ll long long
using namespace std;
void power(ll a,ll n)
{
    ll result=1;
    while(n){
        if(n%2==1){
            result=(a*result)%1000000007;
            n--;
        }
        else{
            a=(a*a)%1000000007;
            n/=2;
        }
    }
    cout<<result%1000000007<<endl;
}
int main()
{
    ll n;
    cin>>n;
    ll a=8;
    power(a,n);
}
