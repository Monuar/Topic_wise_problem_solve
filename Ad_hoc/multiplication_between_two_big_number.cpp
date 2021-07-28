#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    ll p=1e18;
    ll c=p/a;
    if(b>c) cout<<"big"<<endl;
    else cout<<"small"<<endl;
}
