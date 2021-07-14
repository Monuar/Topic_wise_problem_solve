#include<bits/stdc++.h>
using namespace std;
unsigned rev(unsigned num)
{
    unsigned rev=0;
    while(num){
        rev=rev*10+num%10;
        num/=10;
    }
    return rev;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned a,b;
        cin>>a>>b;
        cout<<rev(rev(a)+rev(b))<<endl;

    }
}
