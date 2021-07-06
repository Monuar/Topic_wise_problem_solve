#include<bits/stdc++.h>
#define ll long long
using namespace std;
void power(ll a,ll n)
{
    ll result=1;
    while(n){
        if(n%2==1){
            result=(a*result)%10;
            n--;
        }
        else{
            a=(a*a)%10;
            n/=2;
        }
    }
    cout<<"result "<<result<<endl;
    cout<<result%10<<endl;
}
int main()
{
    ll n;
    cin>>n;
    ll a=1378;
    power(a,n);
}
